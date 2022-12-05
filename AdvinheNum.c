#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    printf("***************************************\n");
    printf("*Bem vindo ao nosso jogo de advinhação*\n");
    printf("***************************************\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int num_secreto = numerogrande%100;
    int tentativas = 0;
    int chute;
    double pontos = 1000;


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
    double pontosperdidos = (chute - num_secreto) / 2.0;
    pontos = pontos - abs(pontosperdidos);    
}
printf("Voce tentou %d\n", tentativas);
printf("Fim de Jogo!\n");
printf("Total de pontos: %.2f\n", pontos);
    

}
