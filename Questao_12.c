#include <stdio.h>


/* Um ponteiro para uma função é um ponteiro que aponta para o endereço onde está armazenado uma função, 
de forma que é possível enviar para uma função o endereço de outra função. */



int dobro (int x)
     { 
         return 2*x;
        }
int quadrado (int x)
     { 
        return x*x;
        }
int cubo (int x)
    { 
        return x*x*x;
         }

void imprimir (int (*funcao)(int), int y) {

    printf ("O resultado e --->> %d \n", (funcao)(y));
}

int main () {

    imprimir (dobro, 7);
    imprimir (quadrado, 7);
    imprimir (cubo, 7);

     return (0);
}



    
