#include<stdio.h>

int main(){
    printf("***************************************\n");
    printf("*Bem vindo ao nosso jogo de advinhação*\n");
    printf("***************************************\n");


    int num_secreto = 42;
    int tentativas = 0;
    int chute;
    int pontos;


while(chute!=num_secreto){
    printf("Tentativa %d\n", tentativas+1);
    printf("Qual é o seu chute? ");
    scanf( "%d", &chute);
    printf("Seu chute foi %d\n", chute);

    if (chute<0){
        printf("Voce não pode digite numeros negativos");
        continue;
    }
    
    
    if(chute ==num_secreto){
        printf("Voce acertou!!");
        break;
    }
    else{
        if(chute<num_secreto){
            printf("Seu chute foi menor que o numero secreto\n");
        }
        else{
            printf("Seu chute foi maior que o numero secreto\n");
        }
    }
    tentativas++;
    int pontosperdidos = (chute - num_secreto) / 2;
    pontos = pontos - pontosperdidos;    
}
printf("Voce tentou %d\n", tentativas);
printf("Fim de Jogo!\n");
printf("Total de pontos: %d\n", pontos);
    

}
