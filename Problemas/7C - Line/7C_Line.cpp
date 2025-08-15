// 7C - Line
// https://codeforces.com/problemset/problem/7/C

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// Función:
//   gcdExtended: Obtén los coeficientes del Algoritmo Extendido de Euclides para el gcd(a,b)
// Parámetros:
//   a,b = Números a obtener su GCD 
long long int gcdExtended(long long int a, long long int b, long long int *x, long long int *y) 
{ 
    // Caso base: gcd(a,b) = 1
    if (a == 0) { 
        *x = 0; 
        *y = 1; 
        return b; 
    } 

    // Realiza recursión para encontrar el GCD
    long long int x1, y1; 
    long long int gcd = gcdExtended(b%a, a, &x1, &y1); 
    *x = y1 - (b / a) * x1; 
    *y = x1; 

    return gcd; 
} 

int main(){

    // Input:
    // 1) a,b,c = Coeficientes de la ecuación lineal
    long long int a,b,c;
    cin >> a >> b >> c;

    // Obtén el GCD y los coeficientes (x,y) del EEA de a y b
    long long int x,y;
    long long int gcd = gcdExtended(a, b, &x, &y); 

    // Si el GCD es divisible con C, entonces sí hay unas coordenadas (x,y) enteras que pasan por la ecuación lineal
    if(c % gcd == 0) {

        // Calcula (x,y) que pasan por la ecuación lineal
        long long int x0 = x * (c / gcd) * -1;
        long long int y0 = y * (c / gcd) * -1;
        cout << x0 << " " << y0 << endl;

    } else {
        cout << -1 << endl;
    }

    return 0;
}