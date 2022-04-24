#include <stdio.h>
#include <stdlib.h>

int compara (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
} 

// A função COMPARA acima, faz parte da estrutura necessária a função qsort. Ela funciona comparando dois elementos do vetor. 
// Ela devolve um valor maior do que zero: se o primeiro valor for maior do que o segundo.
// Valor menor do que zero: se o primeiro valor for menor do que o segundo. Ou o próprio zero se os numeros forem iguais.

int main () {
 
    float *v;  
    int n;

printf ("declare o numero de elementos do vetor");
   scanf ("%d", &n); 
   printf ("declare os elementos do vetor");
   v = malloc (n * sizeof (float)); // Aqui foi reservado um espaço de memoria do tamanho "n" (anteriormente declarado pelo usuário) vezes o numero de bytes necessários para armazenar um float.
     for (int i = 0; i < n; ++i) {
      scanf ("%f", &v[i]);
   } // esse for vai receber os valores passados pelo usuário e armazenar no vetor.
  printf ("o vetor ordenado e: \n");
   
    qsort(v, n, sizeof(float), compara); // Agora a função "qsort" vai ordenar os numeros do vetor. Para isso, declaramos um ponteiro 
    // para o primeiro elemento do vetor (v), o numero de elementos no vetor, o tamanho de cada elemento e por fim um ponteiro para a função 
    // "compara", declarada anteriormente fora da main. Usando os resultados de "compara" a função qsort irá ordenar os elementos.
    // A função qsort é uma função que já está na biblioteca, de forma que não preciso informar o que ela faz, no corpo da função. Apenas passar os paramentos. 
   for (int z=0; z < n; ++z) {
    printf (" %f", v[z]);
   }
    free (v);
    return (0);
    } 


     
