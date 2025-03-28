// 1433A - Boring Apartments
// https://codeforces.com/problemset/problem/1433/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) pruebas = Número de casos de prueba a realizar
    int pruebas;
    cin >> pruebas;

    // Itera sobre cada caso de prueba
    for(int indice_prueba = 0; indice_prueba < pruebas; indice_prueba++) {

        // Input:
        // 2) departamento = Número de departamento que contestó
        int departamento;
        cin >> departamento;

        // Extrae el dígito del departamento
        int digito = departamento % 10;

        int longitud_departamento = to_string(departamento).length();
        
        // Calcula el número de dígitos presionados
        // 10 * (digito - 1) = Número de dígitos presionados antes de llegar al dígito que compone el departamento
        // N * (N + 1) / 2 = Número de dígitos presionados sobre el dígito del departamento
        int digitos_presionados = 10 * (digito - 1) + (longitud_departamento * (longitud_departamento + 1) / 2);

        // Imprime el número de dígitos presionados
        cout << digitos_presionados << endl;
    }
    
    return 0;
}