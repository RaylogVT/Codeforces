// 148A - Insomnia Cure
// https://codeforces.com/problemset/problem/148/A

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    // Input:
    // 1) k = k-ésimo dragón atacado con sartén 
    // 2) l = l-ésimo dragón arrojado al balcón 
    // 3) m = m-ésimo dragón aplastado con tacón 
    // 4) n = n-ésimo dragón que huyó
    // 5) Número de dragones
    int k,l,m,n,dragones;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> dragones;

    // Set de dragones atacados con sartén (k)
    // Set de dragones arrojados al balcón (l)
    // Set de dragones aplastados con tacón (m)
    // Set de dragones que huyeron (n)
    set<int> dragones_k;
    set<int> dragones_l;
    set<int> dragones_m;
    set<int> dragones_n;

    // Saca los dragones atacados con sartén (k)
    for(int dragon = k; dragon <= dragones; dragon += k) {
        dragones_k.insert(dragon);
    }

    // Saca los dragones arrojados al balcón (l)
    for(int dragon = l; dragon <= dragones; dragon += l) {
        dragones_l.insert(dragon);
    }

    // Saca los dragones aplastados con tacón (m)
    for(int dragon = m; dragon <= dragones; dragon += m) {
        dragones_m.insert(dragon);
    }

    // Saca los dragones que huyeron (n)
    for(int dragon = n; dragon <= dragones; dragon += n) {
        dragones_n.insert(dragon);
    }

    // Set de dragones atacados en total
    set<int> dragones_atacados;

    // Saca la unión de los 4 sets 
    // La unión (U) eliminará los duplicados
    dragones_atacados.insert(dragones_k.begin(), dragones_k.end());
    dragones_atacados.insert(dragones_l.begin(), dragones_l.end());
    dragones_atacados.insert(dragones_m.begin(), dragones_m.end());
    dragones_atacados.insert(dragones_n.begin(), dragones_n.end());
    
    // Imprime el número de dragones atacados
    cout << dragones_atacados.size() << endl;
    
    return 0;
}