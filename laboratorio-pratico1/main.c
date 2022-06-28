#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char ch;
    char vetor[50];
    int contador, i;

    fp = fopen("text.txt", "r" );
    if(fp == NULL){
        printf("Não foi possivel ler o arquivo.");
    }
    else{
        printf("Lendo o arquivo: \n\n");
        while ( 1 ){
            ch = fgetc(fp);
            if(ch==EOF){
                break;
            }else if(ch != ' '){
                for (i = 0; i < 50; i++) {
                    vetor[i] = ch;
                }
            }

            if(sizeof(vetor) > 4){
                for (i = 0; i < 50; i++) {
                    printf("%c",vetor[i]);
                }
            }
            // else{
            //     contador = contador + 1;
            //     if (contador > 4){
            //         printf("%c",ch);
            //     }
                
            // }
        }
    }
    
    fclose ( fp );
    return 0;
}