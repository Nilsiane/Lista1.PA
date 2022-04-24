#include <stdio.h>
#include <stdlib.h>



void somavetor (int n, int v1[], int v2[], int *v3[]) { 
    for (int j=0; j < (n); ++j) {
        v3 [j] = v1[j] + v2[j];     

  } 
    printf ("o vetor e: \n");
for (int z=0; z < n; ++z) {
    printf ("%d\n", v3[z]);
     }
    
    } 
     
int main () {
    int x;
    int *A, *B;

    printf ("declare o numero de elementos dos vetores");
    scanf ("%i", &x);

    printf ("declare os elementos do primeiro vetor\n");
    A = malloc (x * sizeof (int));
    for (int i = 0; i < x; ++i) {
      scanf ("%i", &A[i]);
   }
printf ("declare os elementos do segundo vetor\n");
   B = malloc (x * sizeof (int));
   for (int i = 0; i < x; ++i) {
      scanf ("%i", &B[i]);
   }
  int *C = calloc (x, sizeof(int));
    

  somavetor (x, A, B, C);

free (A);
free (B);
free (C);
  
     return (0);
}