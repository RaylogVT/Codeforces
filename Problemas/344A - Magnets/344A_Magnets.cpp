// Problema
// https://codeforces.com/problemset/problem/Número/Letra

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

/**
 * contarFrecuencias: ¿Cuántas veces hay un substring dentro de un string?
 * Parámetros:
 * 1) patron = Substring a buscar
 * 2) texto = String a analizar
 * Return:
 * 1) matches = Número de instancias del substring en el string
*/
int contarFrecuencias(string patron, string texto) {
    
    // Longitud del substring
    int M = patron.length();

    // Longitud del string
    int N = texto.length();

    // Número de coincidencias
    int matches = 0;
 
    // Desliza el patrón por cada substring del mismo tamaño del string
    for (int i = 0; i <= N - M; i++) {
        
        // Por el índice actual, analiza si tiene el patrón
        int j;
        for (j = 0; j < M; j++)
            if (texto[i + j] != patron[j])
                break;
 
        // Si patron[0, ..., M-1] = texto[i, i+1, ..., i+M-1], entonces hubo coincidencia del substring
        // Suma +1 al número de coincidencias encontradas
        if (j == M) {
            matches++;
        }
    }

    // Devuelve el número de coincidencias del substring
    return matches;
}

int main(){

    // Input:
    // 1) imanes = Número de imanes
    int imanes;
    cin >> imanes;

    // Fila generada después de unir todos los imanes
    string fila_imanes = "";

    for(int num_iman = 0; num_iman < imanes; num_iman++) {
        // Input:
        // 2) iman_actual = Imán (10 = -+, 01 = +-)
        string iman_actual;
        cin >> iman_actual;

        // Construye la fila de imanes
        fila_imanes = fila_imanes + iman_actual;
    }
    
    // ¿Cuántas veces hay '00' o '11' en la fila de imanes?
    // Esto nos indica cuándo los polos (negativos o positivos) se repelen y forman un nuevo grupo de imanes
    int repele00 = contarFrecuencias("00", fila_imanes);
    int repele11 = contarFrecuencias("11", fila_imanes);

    // Imprime el número de grupos de imanes
    // Grupo inicial + Grupos nuevos por repele de ++ (00) + Grupos nuevos por repele de -- (11)
    int grupos = repele00 + repele11 + 1;
    cout << grupos << endl;

    return 0;
}
