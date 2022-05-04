#include <stdio.h>
#include <stdlib.h>

void compara (float vet[], int dim) {
   float aux;
   for (int i=0; i < (dim-1); ++i) {
   for (int j=0; j < (dim-1); ++j) {
      if (vet[j] > vet[j+1]) {
	        aux = vet[j];
	        vet[j] = vet[j+1];
	        vet[j+1] = aux;
      } }
       }
   for (int z=0; z < dim; ++z) {
    printf ("%f\n",vet[z]);
         } 
         } 

int main () {
 
    float *v;  
    int n;

printf ("declare o numero de elementos do vetor");
   scanf ("%d", &n); 
   printf ("declare os elementos do vetor");
   v = malloc (n * sizeof (float));
     for (int i = 0; i < n; ++i) {
      scanf ("%f", &v[i]);
     }
   
//compara (v, n);

void (*minhafuncao)() = compara;

minhafuncao(v,n);

    free (v);
    return (0);
    } 