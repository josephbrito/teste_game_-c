#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char player1[10];
char player2[10];

printf("Simples jogo de pedra | papel | tesoura \n");
printf("Vez do jogador 1: \n");
scanf("%s", player1);
printf("Vez do jogador 2: \n");
scanf("%s", player2);

if(strcmp(player1, "pedra") == 0){
        if(strcmp(player2, "tesoura") == 0){
            printf("O jogador 1 GANHOU!\n");
            system("pause");
        }else if(strcmp(player2, "papel") == 0){
            printf("O Jogador 2 GANHOU!\n");
            system("pause");
        }else if(strcmp(player2, "pedra") == 0){
            printf("EMPATE!\n");
            system("pause");
        }
}else if(player1 == "tesoura"){
    if(strcmp(player2, "tesoura") == 0){
            printf("EMPATE!\n");
            system("pause");
        }else if(strcmp(player2, "papel") == 0){
            printf("O Jogador 1 GANHOU!\n");
            system("pause");
        }else if(strcmp(player2, "pedra") == 0){
            printf("O jogador 2 GANHOU!\n");
            system("pause");
        }
}else if(player1 == "papel"){
  if(strcmp(player2, "tesoura") == 0){
            printf("O jogador 2 GANHOU!\n");
            system("pause");
        }else if(strcmp(player2, "papel") == 0){
            printf("EMPATE!\n");
            system("pausre");
        }else if(strcmp(player2, "pedra") == 0){
            printf("O jogador 1 GANHOU!\n");
            system("pause");
        }
}else{
    printf("ERRO! joga direito e escreve tudo em minusculo!\n");

}

return 0;
}
