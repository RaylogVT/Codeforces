import os

def find_directories_without_md(start_path):
    """
    Busca directorios que NO contienen archivos .md dentro de un camino dado.

    Args:
        start_path (str): El camino del directorio donde comenzar la búsqueda.

    Returns:
        list: Una lista de nombres de directorios que NO contienen archivos .md.
    """
    no_md_dirs = []
    for entry in os.listdir(start_path):
        full_path = os.path.join(start_path, entry)
        if os.path.isdir(full_path):
            # Explorar recursivamente o simplemente verificar el nivel actual
            # Para esta tarea, solo verificaremos el nivel actual de subdirectorios
            contains_md = False
            try:
                for item in os.listdir(full_path):
                    if item.endswith(".md"):
                        contains_md = True
                        break
            except OSError as e:
                print(f"Error al acceder al directorio {full_path}: {e}")
                continue # Saltar este directorio si hay un error de permisos u otro

            if not contains_md:
                no_md_dirs.append(entry)
    return no_md_dirs

if __name__ == "__main__":
    current_directory = "." # Directorio de trabajo actual
    directories_without_md = find_directories_without_md(current_directory)

    if directories_without_md:
        print("Directorios que NO contienen archivos .md:")
        for dir_name in directories_without_md:
            print(f"- {dir_name}")
    else:
        print("No se encontraron directorios sin archivos .md en el directorio actual.")
