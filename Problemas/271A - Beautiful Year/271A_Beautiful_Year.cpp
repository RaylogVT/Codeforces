// 271A - Beautiful Year
// https://codeforces.com/problemset/problem/271/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
/*
int main(){

    // Inputs:
    // 1) Año inicial
    int anio;
    cin >> anio;

    // Número de dígitos distintos en el año
    // Al estar la variable iniciada en 0, se descarta el año inicial para hacer la búsqueda
    int digitos_distintos = 0;

    // Mientras el año no tenga 4 dígitos, suma 1 al año hasta encontrarlo
    while(digitos_distintos < 4) {

        // Busca el próximo año
        anio++;

        // Año convertido a string
        string str_anio = to_string(anio);

        // Set de dígitos distintos
        set<char> digitos(str_anio.begin(), str_anio.end());

        // Saca el tamaño del set (Número de dígitos en el año)
        digitos_distintos = digitos.size();
    }

    // Imprime el año con dígitos distintos
    cout << anio << endl;
    
    return 0;
}
*/

int main(){

    // Inputs:
    // 1) anio = Año inicial
    int anio;
    cin >> anio;

    // Empieza a buscar a partir del próximo año
    anio++;

    /*
    d1 = 1° dígito
    d2 = 2° dígito
    d3 = 3° dígito
    d4 = 4° dígito
    */
    int d1,d2,d3,d4;

    // Extrae cada dígito con base en su posición en el sistema decimal
    d1 = (anio / 1000) % 10;
    d2 = (anio / 100) % 10;
    d3 = (anio / 10) % 10;
    d4 = anio % 10;

    // Checa si hay un par de dígitos iguales
    // Si un par de dígitos es igual, entonces suma 1 al año hasta encontrar uno donde esto no suceda con algún par 
    while(d1 == d2 || d1 == d3 || d1 == d4 || d2 == d3 || d2 == d4 || d3 == d4) {
        anio++;
        d1 = (anio / 1000) % 10;
        d2 = (anio / 100) % 10;
        d3 = (anio / 10) % 10;
        d4 = anio % 10;
    }

    // Imprime el año con dígitos distintos
    cout << anio << endl;

    return 0;
}
