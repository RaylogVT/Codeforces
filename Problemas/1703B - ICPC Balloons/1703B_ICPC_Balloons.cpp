// 1703B - ICPC Balloons
// https://codeforces.com/problemset/problem/1703/B

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) pruebas = Número de casos de prueba
    int pruebas;
    cin >> pruebas;

    // Itera sobre cada caso de prueba
    for(int indice_prueba = 0; indice_prueba < pruebas; indice_prueba++) {

        // Input:
        // 2) N = Longitud del string
        int N;
        cin >> N; 

        // Input:
        // 3) problemas_resueltos = Problemas resueltos en el concurso
        string problemas_resueltos;
        cin >> problemas_resueltos;

        set<char> letras_unicas;
        for(int indice_letra = 0; indice_letra < N; indice_letra++) { 
            letras_unicas.insert(problemas_resueltos[indice_letra]);
        }

        // Calcula cuántos globos se entregaron en el concurso
        // Globos = Cantidad de letras del string +  Cantidad de letras únicas en el string
        int globos = problemas_resueltos.length() + letras_unicas.size();

        // Imprime la cantidad de globos entregados
        cout << globos << endl;

    }

    return 0;
}