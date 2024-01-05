// 581A - Vasya The Hipster
// https://codeforces.com/problemset/problem/581/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) Número de calcetines rojos
    // 2) Número de calcetines azules
    int calcetines_rojos, calcetines_azules;
    cin >> calcetines_rojos >> calcetines_azules;

    // Calcula el número de días en los que Vasya usará calcetines distintos
    // El valor está en de qué color de calcetines Vasya tiene menos
    int dias_calcetines_distintos = min(calcetines_rojos, calcetines_azules);

    // Calcula el número de días en los que Vasya usará calcetines iguales
    // El valor está en de qué color de calcetines Vasya tiene más entre 2
    int dias_calcetines_iguales = max((calcetines_rojos - min(calcetines_rojos, calcetines_azules)) / 2, (calcetines_azules - min(calcetines_rojos, calcetines_azules)) / 2);

    // Imprime el número de días en los que Vasya usará calcetines del mismo y distinto color
    cout << dias_calcetines_distintos << " " << dias_calcetines_iguales;

    return 0;
}