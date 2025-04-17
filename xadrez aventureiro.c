#include <stdio.h>

int main () {
    int peca;
    int bispo = 0;
    int rainha = 0;
    int cavalo = 1;
 
 printf("***. JOGO DE XADREZ .*** \n");
 printf("Escolha uma peça de xadrez \n");
 printf("1. Torre: \n");
 printf("2. Bispo: \n");
 printf("3. Rainha: \n");
 printf("4. cavalo: \n");
 scanf("%d", &peca);
 
 switch (peca){
 
 
     case 1:
         for (int i = 0; i < 5; i++){
             printf("Direita\n"); //direção do movimento
         }
 
 
     break;
     case 2:
 
      
        while(bispo < 5){
         printf("Cima,Direita \n");
         bispo++;
        }
 
     break;
     case 3:
 
     do {
         printf("Esquerda \n");
         rainha++;
     } while(rainha < 8 );
     
     break;
     case 4:
         while (cavalo--)
         {
             for (int i = 0; i <2; i++) 
             {
                 printf("cima\n"); // imprime "cima" duas vezes
             }
                 printf("Direita\n"); //imprime "Direita" uma vez
             
         }
 
  
 
     break;
     default:
     printf("Comando invalido, insira o numero correto acima... \n");
 }
 
 
 
 
 
 
 
 
 
     return 0;
 }
 