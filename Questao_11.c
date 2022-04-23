/* RESUMO DAS RESPOSTAS

aloha[2] = value; VÁLIDO
scanf("%f", &aloha); INVÁLIDO
aloha = value; INVÁLIDO
printf("%f", aloha); INVÁLIDO
coisas[4][4] = aloha[3]; VÁLIDO
coisas[5] = aloha; INVÁLIDO
pf = value; INVALIDO
pf = aloha; VÁLIDO

*/

/**************************************************************************************/

// DETALHAMENTO


#include <stdio.h>

    int main () {

        float aloha[10], coisas[10][5], *pf, value = 2.2;
        int i=3;

        aloha[2] = value; // Comando válido. O espaço de memoria reservado para aloha[2] recebe o valor armazenado em value, ou seja, 2.2
        printf ("%f", aloha[2]); // Comando válido, será imprimido o valor de aloha [2] na tela.
        printf("%f", aloha [0]); // Comando válido, será imprimido o valor de aloha [0] na tela.
        coisas[4][4] = aloha[3]; // Comando válido. O espaço de memoria reservado para coisas [4][4] recebe o valor armazenado em aloha [3]
        pf = aloha; // Comando válido, o ponteiro armazena o valor contido no endereço de aloha [0]
        
        // aloha = value; // Comando inválido. Nesse caso seria necessário indicar qual dos elementos do vetor a receber value, exemplo aloha [0] = value
        // pf = value; nesse caso pf deveria receber &value
        // coisas[5] = aloha; "coisas" é uma matriz, precisa ser indicado a coluna e a linha, além disso, só possui 4 elementos em cada
        // >>> scanf("%f", &aloha); Comando Inválido. O usuário não pode inserir manualmente um endereço de memoria para o vetor, pois pode causar vários erros. <<<
        return (0);
    }
         