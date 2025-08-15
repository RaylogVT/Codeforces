// 1927A - Make it White
// https://codeforces.com/problemset/problem/1927/A

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // Input:
    // 1) pruebas = Número de casos de prueba
    int pruebas;
    scanf("%d", &pruebas);

    // Itera sobre cada caso de prueba
    for(int indice_prueba = 0; indice_prueba < pruebas; indice_prueba++) {

        // Input:
        // 2) N = Longitud de la fila
        int N;
        scanf("%d", &N);

        // Input:
        // 3) celdas = Celdas de la fila
        char celdas[11];
        scanf("%s",celdas);

        int primera_celda_negra, ultima_celda_negra;

        // Itera sobre la fila para encontrar la 1° celda negra
        for(int indice_celda = 0; indice_celda < N; indice_celda++) {
            if(celdas[indice_celda] == 'B') {
                primera_celda_negra = indice_celda;
                break;
            }
        }

        // Itera sobre la fila para encontrar la última celda negra
        for(int indice_celda = N-1; indice_celda >= 0; indice_celda--) {
            if(celdas[indice_celda] == 'B') {
                ultima_celda_negra = indice_celda;
                break;
            }
        }

        // Calcula la longitud del segmento a pintar
        int longitud_segmento = ultima_celda_negra - primera_celda_negra + 1;

        // Imprime la longitud del segmento a pintar
        printf("%d\n", longitud_segmento);
    }

    return 0;
}


uint8_t compute(const char *input, const uint8_t n)
{
  uint8_t i = 0;
  while (i < n && input[i] == 'W') ++i;
  if (i == n) return 0;
  uint8_t j;
  for (j = n - 1; j > i && input[j] == 'W'; --j);
  return j - i + 1;
}