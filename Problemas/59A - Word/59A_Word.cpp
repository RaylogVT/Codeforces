// 59A - Word
// https://codeforces.com/problemset/problem/59/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input - Palabra
    string palabra;
    cin >> palabra;

    // Contadores de letras de mayúsculas y minúsculas
    int tamano = palabra.length();
    int mayusculas = 0;
    int minusculas = 0;

    // Checa cada letra para saber si es mayúsucula o minúscula a través de su ASCII
    // Añade la letra al contador correspondiente
    for(int letra = 0; letra < tamano; letra++) {
        if(palabra[letra] >= 'A' && palabra[letra] <= 'Z') {
            mayusculas++;
        }
        if(palabra[letra] >= 'a' && palabra[letra] <= 'z') {
            minusculas++;
        }
    }

    // Si hay más mayúsculas que minúsculas, convierte a mayúsculas
    // Si hay menos o el mismo número de mayúsculas que minúsculas, convierte a minúsculas
    if(mayusculas > minusculas) {
        for(int i = 0; i < tamano; i++) {
            palabra[i] = toupper(palabra[i]);
        }
    } else if(mayusculas <= minusculas) {
        for(int i = 0; i < tamano; i++) {
            palabra[i] = tolower(palabra[i]);
        }
    }

    // Imprime la palabra convertida
    cout << palabra << endl;

    return 0;
}