/* Questao 5
// Resumo das respostas:
// O Laço irá imprimir cinco vezes os valores de i (com i variando de 0 até 4), seguido do valor armazenado em v[i], duas vezes,
// em seguida teremos impresso, duas vezes, o endereço de memoria onde está armazenado a variavel v[i].
// No meu computador os valores retornados foram:
// i = 0 vet[0] = 1.1*(f + 0) = 1.1 &vet[0] = 633FFC00 (f + 0) = 633FFC00
// i = 1 vet[1] = 2.2*(f + 1) = 2.2 &vet[1] = 633FFC04 (f + 1) = 633FFC04
// i = 2 vet[2] = 3.3*(f + 2) = 3.3 &vet[2] = 633FFC08 (f + 2) = 633FFC08
// i = 3 vet[3] = 4.4*(f + 3) = 4.4 &vet[3] = 633FFC0C (f + 3) = 633FFC0C
// i = 4 vet[4] = 5.5*(f + 4) = 5.5 &vet[4] = 633FFC10 (f + 4) = 633FFC10
Detalhes
*/ 

#include <stdio.h>

int main(void){

  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d\n",i);
  printf("vet[%d] = %.1f\n",i, vet[i]);
  printf("*(f + %d) = %.1f\n",i, *(f+i));
  printf("&vet[%d] = %X\n",i, &vet[i]);
  printf("(f + %d) = %X",i, f+i);
 
  }

}