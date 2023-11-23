// 750A - New Year and Hurry
// https://codeforces.com/problemset/problem/750/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) Número de problemas
    // 2) Tiempo de viaje a la fiesta
    int problemas, minutos_viaje;
    cin >> problemas >> minutos_viaje;

    // ¿Cuánto tiempo queda para resolver los problemas del concurso?
    int tiempo_restante = 240 - minutos_viaje;

    // ¿Cuántos problemas del concurso has resuelto?
    int problemas_resueltos = 0;

    // Itera sobre los problemas
    for(int numero_problema_actual = 1; numero_problema_actual <= problemas; numero_problema_actual++) {

        // Si al resolver el problema actual te sobra tiempo, entonces resuélvelo, suma +1 al número de problemas resueltos y actualiza el tiempo restante
        if(tiempo_restante - (5 * numero_problema_actual) >= 0) {
            tiempo_restante = tiempo_restante - (5 * numero_problema_actual);
            problemas_resueltos += 1;
        }

        // Si al resolver el problema actual te falta tiempo, entonces termina de iterar sobre los problemas
        else if(tiempo_restante - (5 * numero_problema_actual) < 0) {
            break;
        }
    }

    // Imprime el número de problemas resueltos
    cout << problemas_resueltos << endl;

    return 0;
}