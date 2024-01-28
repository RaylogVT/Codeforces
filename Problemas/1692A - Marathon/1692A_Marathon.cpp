// 1692A - Marathon
// https://codeforces.com/problemset/problem/1692/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) pruebas = Casos de prueba
    int pruebas;
    cin >> pruebas;

    // Realiza cada caso de prueba
    for(int prueba_actual = 0; prueba_actual < pruebas; prueba_actual++) {
        
        // Input:
        // distancia_timur (a) = Distancia de Timur
        // distancia_b, distancia_c, distancia_d = Distancia de los otros 3 participantes
        int distancia_timur, distancia_b, distancia_c, distancia_d;
        cin >> distancia_timur >> distancia_b >> distancia_c >> distancia_d;

        // Número que personas por delante de Timur
        int personas_delante_Timur = 0;

        // Si B está delante de Timur, suma +1 al número de personas por delante de Timur
        if(distancia_timur < distancia_b) {
            personas_delante_Timur += 1;
        }

        // Si C está delante de Timur, suma +1 al número de personas por delante de Timur    
        if(distancia_timur < distancia_c) {
            personas_delante_Timur += 1;
        }

        // Si D está delante de Timur, suma +1 al número de personas por delante de Timur    
        if(distancia_timur < distancia_d) {
            personas_delante_Timur += 1;
        }
        
        // Imprime el número total de personas por delante de Timur
        cout << personas_delante_Timur << endl;
    }

    return 0;
}