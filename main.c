#include <stdio.h>

int main() {
    int resposta = 0;
    
    while (resposta != 1) {

        printf("\n\nFalaaaa comigo loira, bora treinar amanha depois das 19??? Hmm oq vc me dizz\n\n\n\n");
        printf("\n\n1 - Sim\n\n");
        printf("\n\n2 - Nao\n\n");
        printf("Digite sua resposta: ");

        scanf("%d", &resposta);

        if (resposta == 1) {
            printf("\n\n\nFINALMENTEEEEE EINN, que demora pra achar a reposta certa!!!! Te espero amanha entao 28 anos :) ! \n\n\n");
        } else if (resposta == 2) {
            
            printf("\n\nFinge de boba nao, vc sabe que essa nao eh a resposta, uma pessoa que fez 2 faculdades ao mesmo tempo nao eh possivel que nao saiba qual e a resposta, me ajuda aiii!!!\n\n\n\n");
        }
    }

    return 0;
}
