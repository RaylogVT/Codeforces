// 703A - Mishka and Game
// https://codeforces.com/problemset/problem/703/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) rondas = Número de rondas a jugar
    int rondas;
    cin >> rondas;

    // Contadores de rondas ganadas de Mishka y Chris
    int rondas_ganadas_mishka = 0;
    int rondas_ganadas_chris = 0;

    // Itera sobre cada ronda
    for(int ronda_actual = 0; ronda_actual < rondas; ronda_actual++) {

        // Input:
        // 2) dado_mishka = Resultado del dado de Mishka
        // 3) dado_chris = Resultado del dado de Chris
        int dado_mishka, dado_chris;
        cin >> dado_mishka >> dado_chris;

        // # Suma +1 al contador de Mishka si su dado da un número mayor al de Chris
        if(dado_mishka > dado_chris) {
            rondas_ganadas_mishka++;

        // Suma +1 al contador de Chris si su dado da un número mayor al de Mishka
        } else if(dado_mishka < dado_chris) {
            rondas_ganadas_chris++;
        }
    }

    // Compara el número de rondas ganadas de Mishka y Chris
    // Imprime Mishka si gana Mishka, Chris si gana Chris, Friendship si es empate
    if(rondas_ganadas_mishka > rondas_ganadas_chris) {
        cout << "Mishka" << endl;
    } else if(rondas_ganadas_mishka < rondas_ganadas_chris) {
        cout << "Chris" << endl;
    } else if(rondas_ganadas_mishka == rondas_ganadas_chris) {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}