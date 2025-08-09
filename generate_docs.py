import os
import random

import google.generativeai as genai


def main():
    """Generates README.md files for problems using Google Generative AI."""
    api_key = os.getenv("GEMINI_API_KEY")
    if not api_key:
        print("GEMINI_API_KEY environment variable is not set. Skipping documentation generation.")
        return

    # Configure the Generative AI client
    genai.configure(api_key=api_key)
    model = genai.GenerativeModel("gemini-1.5-flash")

    problems_dir = os.path.join(os.getcwd(), "Problemas")
    if not os.path.isdir(problems_dir):
        print(f"Problems directory not found: {problems_dir}")
        return

    for problem_name in os.listdir(problems_dir):
        problem_path = os.path.join(problems_dir, problem_name)
        if not os.path.isdir(problem_path) or problem_name == "Plantillas":
            continue

        contents = []
        for fname in os.listdir(problem_path):
            if fname.endswith(".cpp") or fname.endswith(".py") or fname == "README.md":
                file_path = os.path.join(problem_path, fname)
                try:
                    with open(file_path, "r", encoding="utf-8") as f:
                        contents.append(f"### {fname}\n{f.read()}")
                except OSError as exc:
                    print(f"Could not read {file_path}: {exc}")

        if not contents:
            continue

        random.shuffle(contents)
        prompt = "\n\n".join(contents)

        try:
            response = model.generate_content(prompt)
            readme_path = os.path.join(problem_path, "README.md")
            with open(readme_path, "w", encoding="utf-8") as f:
                f.write(response.text)
            print(f"Generated documentation for {problem_name}")
        except Exception as exc:
            print(f"Error generating documentation for {problem_name}: {exc}")


if __name__ == "__main__":
    main()
