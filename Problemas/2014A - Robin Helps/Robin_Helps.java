import java.util.Scanner;

public class Robin_Helps {

	public static void main(String[] args) {

		// Scanner object
		Scanner input = new Scanner(System.in);

		// Input:
		// 1) pruebas = Número de casos de prueba
		int pruebas = input.nextInt();
		
		// Itera sobre cada caso de prueba
    	for(int indice_prueba = 0; indice_prueba < pruebas; indice_prueba++) {  
		
			// Input:
			// 2) personas = Número de personas
			// 3) threshold = Oro mínimo que debe tener una persona para que Robin Hood se lo robe
			int personas = input.nextInt();
			int threshold = input.nextInt();

			// Input:
			// 4) oroPersonas = Cantidad de oro que tiene cada persona
			int[] oroPersonas = new int[101];
			for(int indice_persona = 0; indice_persona < personas; indice_persona++) {  
				oroPersonas[indice_persona] = input.nextInt();
			}

			int robin = 0;              // Oro que tiene Robin robado
			int personasDonadas = 0;    // Cantidad de personas que recibieron oro de Robin Hood
			
			// Itera sobre el oro de cada persona
			for(int indice_persona = 0; indice_persona < personas; indice_persona++) {  
				
				// Si la persona tiene más oro que el threshold, entonces Robin Hood se lo roba
				if(oroPersonas[indice_persona] >= threshold) {
					robin += oroPersonas[indice_persona];
				}

				// Si la persona no tiene oro, entonces se revisa si Robin Hood le puede donar
				if(oroPersonas[indice_persona] == 0) {
					
					// Por cada persona que reciba oro de Robin Hood, se suma +1 al contador
					if(robin > 0) {
						robin -= 1;
						personasDonadas += 1;
					}
				}
			}

			// Imprime la cantidad de personas que recibieron Robin Hood
			System.out.println(personasDonadas);		
		}
		
		input.close();
	}
}
