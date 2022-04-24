
#include <stdio.h>
#include <stdlib.h>



void ordenavetor () { 
    float *v;  
    int n;
    float aux;

   printf ("declare o numero de elementos do vetor");
   scanf ("%d", &n);
   printf ("declare os elementos do vetor");
   v = malloc (n * sizeof (float));
   for (int i = 0; i < n; ++i) {
      scanf ("%f", &v[i]);
   }
  printf ("o vetor ordenado e: \n");
   
    for (int j=0; j < (n-1); ++j) {
        if ( v[j] > v[j+1]) {
	        aux = v[j];
	        v[j] = v[j+1];
	        v[j+1] = aux;
   } 
    }
     
   for (int z=0; z < n; ++z) {
    printf (" %f", v[z]);
   }
    free (v);
    }


int main () {

  // float *v; 
  // int n;
   // float aux;

   /* void ordenavetor () { 
    float *v;  
    int n
    float aux;

   printf ("declare o numero de elementos do vetor");
   scanf ("%d", &n);
   printf ("declare os elementos do vetor");
   v = malloc (n * sizeof (float));
   for (int i = 0; i < n; ++i) {
      scanf ("%f", &v[i]);
   }
  printf ("o vetor ordenado e: \n");
   
    for (int j=0; j < (n-1); ++j) {
        if ( v[j] > v[j+1]) {
	        aux = v[j];
	        v[j] = v[j+1];
	        v[j+1] = aux;
   } 
    }
     
   for (int z=0; z < n; ++z) {
   printf (" %f", v[z]);
   }
    } */

  ordenavetor ();
  

     return (0);
}