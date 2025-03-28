// 1472B - Fair Division 
// https://codeforces.com/problemset/problem/1472/B

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) pruebas = Número de caso de prueba
    int pruebas;
    cin >> pruebas;

    // Itera sobre cada caso de prueba
    for(int indice_prueba = 0; indice_prueba < pruebas; indice_prueba++) {

        // Input:
        // 2) velas = Número de velas entregadas
        int velas;
        cin >> velas;

        // Input:
        // 3) gramos_velas = Peso en gramos de cada vela
        int gramos_velas[101];
        for(int indice_vela = 0; indice_vela < velas; indice_vela++) {
            cin >> gramos_velas[indice_vela];
        }

        // Suma el total de gramos de las velas
        int total = 0;
        for(int indice_vela = 0; indice_vela < velas; indice_vela++) {
            total = total + gramos_velas[indice_vela];
        }

        // Si el total de gramos es impar, entonces imprime NO, de lo contario procede a revisar la repartición de velas
        if(total % 2 == 1) {
            cout << "NO" << endl;
        } else {
            
            // Cantidad de velas de 1 y 2 gramo s  
            int velas_1_gramos = 0;
            int velas_2_gramos = 0;
            for(int indice_vela = 0; indice_vela < velas; indice_vela++) {
                if(gramos_velas[indice_vela] == 1) {
                    velas_1_gramos++;
                } 
                if(gramos_velas[indice_vela] == 2) {
                    velas_2_gramos++;
                } 
            }

            // Mitad del total de gramos --> Gramos a repartir entre Alice y Bob
            int mitad = total / 2;

            // Gramos actuales de Alice y Bob
            int gramos_Alice = 0;
            int gramos_Bob = 0;

            // Dale a Alice velas de 2 gramos hasta alcanzar la mitad
            // Resta 1 vela al contador de velas de 2 gramos en cada instancia
            while(gramos_Alice < mitad) {

                // Si hay velas de 2 gramos, entonces se le dan a Alice   
                if(velas_2_gramos > 0) {

                    // Si Alice necesita 1 vela de 1 gramo para alcanzar la mitad, entonces se le asigna
                    if(mitad - gramos_Alice == 1) {

                        // Si no hay velas de 1 gramo para dar a Alice, entonces no se pueden repartir equitativamente los gramos
                        if(velas_1_gramos <= 0){
                            cout << "NO" << endl;   
                            break;

                        // Si hay velas de 1 gramo para dar a Alice, entonces se le da la 1 vela de 1 gramo
                        } else {
                            gramos_Alice++;
                            velas_1_gramos--;
                        }

                    // Da 1 vela de 2 gramos a Alice
                    } else {
                        gramos_Alice += 2;
                        velas_2_gramos--;
                    }

                // Si no hay velas de 2 gramos, entonces dale velas de 1 gramo a Alice
                } else {         
                    gramos_Alice++;
                    velas_1_gramos--;
                }
            }

            // Si Alice recibió la mitad de gramos totales, entonces sí se pueden repartir las velas
            if(gramos_Alice == mitad) {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}