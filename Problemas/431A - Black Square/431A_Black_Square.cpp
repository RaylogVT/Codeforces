// 431A - Black Square
// https://codeforces.com/problemset/problem/431/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) calorias_tira1 = Número de calorías a usar para presionar un cuadrado negro en la 1° tira
    // 2) calorias_tira2 = Número de calorías a usar para presionar un cuadrado negro en la 2° tira
    // 3) calorias_tira3 = Número de calorías a usar para presionar un cuadrado negro en la 3° tira
    // 4) calorias_tira4 = Número de calorías a usar para presionar un cuadrado negro en la 4° tira
    int calorias_tira1, calorias_tira2, calorias_tira3, calorias_tira4;
    cin >> calorias_tira1 >> calorias_tira2 >> calorias_tira3 >> calorias_tira4;

    // Input:
    // 5) tiras = Orden en el que se presionaron cuadrados negros sobre las tiras
    string tiras;
    cin >> tiras;

    // Total de calorías gastadas
    int calorias = 0;

    // Tamaño del string
    int tamano = tiras.length();

    // Itera sobre cada cuadrado presionado en el juego
    for(int indice_tira = 0; indice_tira < tamano; indice_tira++) {

        // Si se presionó un cuadrado negro en una tira determinada, suma la cantidad de calorías respectivas a utilizar sobre el total
        if(tiras[indice_tira] == '1') {
            calorias += calorias_tira1;
        }
        if(tiras[indice_tira] == '2') {
            calorias += calorias_tira2;
        }
        if(tiras[indice_tira] == '3') {
            calorias += calorias_tira3;
        }
        if(tiras[indice_tira] == '4') {
            calorias += calorias_tira4;
        }
    }

    // Imprime la cantidad de calorías utilizadas
    cout << calorias << endl;

    return 0;
}