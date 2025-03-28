import java.util.Scanner;

public class Brain_Photos {

	public static void main(String[] args) {

		// Scanner object
		Scanner input = new Scanner(System.in);
		
		// Input:
    	// 1) N, M = Dimensiones de la foto
		int N = input.nextInt();
		int M = input.nextInt();

		// Variable bandera
		// Asume que la foto es Blanco y Negro
		boolean photoIsBlackAndWhite = true;

		// Input:
		// 2) pixel = Color del pixel actual
		for(int fila = 0; fila < N; fila++) {
			for(int columna = 0; columna < M; columna++) {
				String pixel = input.next();
				if(pixel.equals("C") || pixel.equals("Y") || pixel.equals("M")) {
					photoIsBlackAndWhite = false;
				}
			}
		}
		
		// Revisa la variable bandera para determinar si la foto es Blanco y negro o Color
		if(photoIsBlackAndWhite == true) { 
			System.out.println("#Black&White");
		} else {
			System.out.println("#Color");
		}
		input.close();
	}
}
