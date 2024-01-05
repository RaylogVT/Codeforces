// 1352A - Sum of Round Numbers
// https://codeforces.com/problemset/problem/1352/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) prueba = Número de pruebas
    int pruebas;
    cin >> pruebas;

    // Realiza cada prueba
    for(int prueba_actual = 0; prueba_actual < pruebas; prueba_actual++) {

        // Input:
        // 2) numero = Número a descomponer
        int numero;
        cin >> numero;
        
        // Número de números redondos
        int numeros_redondos = 0;

        // Copia del número
        int numero_digitos = numero;

        // Revisa que el número sea distinto a 0
        while(numero_digitos != 0) {

            // Si el dígito es distinto de 0, entonces sumamos +1 números redondos
            if(numero_digitos % 10 != 0) {
                numeros_redondos++;
            }

            // Divide entre 10 para pasar al siguiente dígito
            numero_digitos = numero_digitos / 10;
        }

        // Posición decimal del número redondo (unidad, decena, centena, etc...)
        int decimal = 1;

        // Revisa que el número sea distinto a 0
        while(numero != 0) {
            
            // Si el dígito es distinto de 0, entonces extraemos el número redondo
            if(numero % 10 != 0) {
                
                // Extrae el número redondo
                int num_redondo = (numero % 10) * decimal;
                
                // Imprime el número redondo
                cout << num_redondo << " ";
            }
            
            // Divide entre 10 para pasar al siguiente dígito
            numero = numero / 10;

            // Multiplica por 10 para pasar a la siguiente unidad decimal
            decimal = decimal * 10;
        }
        cout << endl;
    }

    return 0;
}
