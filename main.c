#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    /*
    1) Maior menor
    2) Instanciar vetor de contagem de tamanho (maior-menor)+
    3) Incrementar vetor contagem com ocorrencias +> C [V[i] - menor] ++
    4) Somar ocorrencias (C[i+1]= c[i] + c [i+1])
    5) Ordenar vetor => ord [[v[i - menor] - 1] = v[i] */




    int *v;
    int n;
// recebendo vetor do usuário
   printf ("declare o numero de elementos do vetor");
   scanf ("%d", &n);
   printf ("declare os elementos do vetor");
   v = malloc (n * sizeof (int));
     for (int i = 0; i < n; ++i) {
      scanf ("%d", &v[i]);
     }

// definindo maior e menor=
    int maior = v[0];
    int menor = v[0];

    for (int i=1; i<n; i++ ) {
        if (v[i] < menor) {
            menor = v[i];
        }
        if (v[i] > maior) {
            maior = v[i];
        }
    }

    // instanciando o vetor de contagem
    int tam;
    tam = ((maior-menor) + 1);

    int* c = (int*) calloc (tam, sizeof (int));


     // Somando ocorrencias
    for (int i=0; i<n; i++ ) {
    c [v[i]-menor]++;
    }

    // Soma cumulativa
    for (int i=1; i<tam; i++ ) {
        c[i] += c[i-1]];
    }

    // passando valores para ordenado
    int* ord = (int*) calloc (n, sizeof (int));
    for (int i=0; i<n; i++ ) {
        ord[c[v[i]-menor] - 1] = v[i];
    }

     // print apenas para testar mesmo

    for (int i=0; i<n; i++ ) {
    printf("%d/n", v[i]);
    printf("%d/n", ord[i]);
    }
    for (int i=0; i<tam; i++ ) {
    printf("%d/n", c[i]);
    }

    free (v);
    free (c);
    free (ord);

    return 0;
}
