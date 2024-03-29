// 151A - Soft Drinking
// https://codeforces.com/problemset/problem/151/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) amigos = Número de amigos
    // 2) botellas = Número de botellas
    // 3) mililitros = Mililitros por botella
    // 4) limones = Número de limones
    // 5) trozos = Número de trozos de limones
    // 6) gramos_sal = Gramos de sal
    // 7) minimo_mililitros = Mínimo de mililitros para brindas
    // 8) minimo_sal ) Mínimo de sal para brindas
    int amigos, botellas, mililitros, limones, trozos, gramos_sal, minimo_mililitros, minimo_sal, bebidas_totales;
    cin >> amigos >> botellas >> mililitros >> limones >> trozos >> gramos_sal >> minimo_mililitros >> minimo_sal;

    // Calcula el número de brindis que se pueden realizar con los mililitros de alcohol disponibles
    int brindis_alcohol = (botellas * mililitros) / minimo_mililitros;

    // Calcula el número de brindis que se pueden realizar con los trozos de limones disponibles
    int brindis_limones = limones * trozos;

    // Calcula el número de brindis que se pueden realizar con los gramos de sal disponibles
    int brindis_sal = gramos_sal / minimo_sal;

    // Calcula el número de bebidas que se pueden hacer
    // El número de bebidas está determinado por el valor mínimo de bebidas, limones y sal disponible
    if (brindis_alcohol <= brindis_limones && brindis_alcohol <= brindis_sal) {
        bebidas_totales = brindis_alcohol;
    } 
    else if (brindis_limones <= brindis_alcohol && brindis_limones <= brindis_sal) {
        bebidas_totales = brindis_limones;
    } 
    else {
        bebidas_totales = brindis_sal;
    }

    // Calcula el número de brindis que se pueden realizar
    int numero_brindis = bebidas_totales / amigos;

    // Imprime el número de brindis que se pueden realizar
    cout << numero_brindis << endl;

    return 0;
}
