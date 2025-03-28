// 1154B - Make Them Equal 
// https://codeforces.com/problemset/problem/1154/B

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) N = Número de elementos en el arreglo
    int N;
    cin >> N;

    // Input:
    // 2) arreglo = Número de elementos en el arreglo
    int arreglo[101];
    for(int indice_arreglo = 0; indice_arreglo < N; indice_arreglo++) {
        cin >> arreglo[indice_arreglo];
    }

    // Obtén los números únicos en el arreglo
    set<int> numeros_unicos;
    numeros_unicos.insert(arreglo, arreglo+N); 

    // Guarda los números únicos en un arreglo
    int arreglo_numeros_unicos[101];
    int contador_numeros_unicos = 0;
    for(auto it = numeros_unicos.begin(); it != numeros_unicos.end(); ++it) { 
        arreglo_numeros_unicos[contador_numeros_unicos] = *it;
        contador_numeros_unicos++;
    }

    // Guarda los números únicos en un arreglo
    sort(arreglo_numeros_unicos, arreglo_numeros_unicos + contador_numeros_unicos);

    // Si el arreglo tiene 4 o más números únicos, entonces no se puede uniformizar
    if(contador_numeros_unicos >= 4) {
        cout << -1 << endl;
    }

    // Si el número de en medio es el punto medio entre los extremos, D es igual a la resta del número más grande y el de en medio
    if(contador_numeros_unicos == 3) {

        // Si el número de en medio es el punto medio entre los extremos, D es igual a la resta del número más grande y el de en medio
        if(arreglo_numeros_unicos[2] - arreglo_numeros_unicos[1] == arreglo_numeros_unicos[1] - arreglo_numeros_unicos[0]) {
            cout << arreglo_numeros_unicos[2] - arreglo_numeros_unicos[1] << endl;
        
        // Si el número de en medio no es el punto medio entre los extremos, entonces el arreglo no se puede uniformizar
        } else {
            cout << -1 << endl;
        }
    }

    // Si el arreglo tiene 2 números únicos, entonces se revisa su paridad     
    if(contador_numeros_unicos == 2) {
        
        // Si la resta entre los dos números únicos es par, entonces D es igual al punto medio entre los dos
        if((arreglo_numeros_unicos[1] - arreglo_numeros_unicos[0]) % 2 == 0) {
            cout << (arreglo_numeros_unicos[1] - arreglo_numeros_unicos[0]) / 2 << endl;
        
        // Si la resta entre los dos números únicos es imapar, entonces D es igual a la resta como tal
        } else {
            cout << arreglo_numeros_unicos[1] - arreglo_numeros_unicos[0] << endl;
        }
    }

    // Si el arreglo tiene 1 número único, entonces D es igual al propio número  
    if(contador_numeros_unicos == 1) {
        cout << 0 << endl;
    }

    return 0;
}