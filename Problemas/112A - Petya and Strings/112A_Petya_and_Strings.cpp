// 112A - Petya and Strings
// https://codeforces.com/problemset/problem/112/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Inputs
    // 1) String #1
    // 2) String #2
    string string1, string2;
    cin >> string1 >> string2;

    // Saca la longitud de los dos strings
    int tamano_string1 = string1.length();
    int tamano_string2 = string2.length();

    // Convierte los strings a mayúsculas
    transform(string1.begin(), string1.end(), string1.begin(), ::toupper);
    transform(string2.begin(), string2.end(), string2.begin(), ::toupper);

    // Si los dos strings son del mismo tamaño, entonces procede a comparar
    if(tamano_string1 == tamano_string2) {

        // Recorre los dos strings a la par
        for(int letra = 0; letra < tamano_string1; letra++) {

            // Si una letra es distinta entre los dos strings, compara sus valores ASCII
            if(string1[letra] != string2[letra]) {

                // Imprime 1 si el valor ASCII de la letra del 1° string es mayor al del 2° string
                if(int(string1[letra]) > int(string2[letra])) {
                    cout << "1" << endl;
                    return 0;

                // Imprime -1 si el valor ASCII de la letra del 1° string es mayor al del 2° string
                } else if(int(string1[letra]) < int(string2[letra])) {
                    cout << "-1" << endl;
                    return 0;
                }
            }
        }
    }

    // Imprime 0 si no hubo letras distintas entre los strings
    cout << "0" << endl;

    return 0;
}