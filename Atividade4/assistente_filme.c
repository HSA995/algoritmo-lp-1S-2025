#include <stdio.h>

// float valor_opcoes(){
//     return leve = 1
// }

int main (int argc, char* argv[]){
    float TipoFilme;
    float EscolhaLeve;
    float EscolhaIntenso;
    float EscolhaTerror;

    float leve = 1;
    float intenso = 2;
    float comedia = 3;
    float animacao = 4;
    float terror = 5;
    float acao = 6;


     printf("Escolher tipo de filme.\n");
     printf("1 - leve\n");
     printf("2 - intenso\n");
     scanf("%f", &TipoFilme);

     if (TipoFilme == 1){
        printf("Escolha entre comedia ou animacao\n");
        printf("1 - comedia\n");
        printf("2 - animacao\n");
        scanf("%f", &EscolhaLeve);
     }  

     if (EscolhaLeve == 1){
        printf("Assistir ao filme Gente grande\n");
     }
     
     if (EscolhaLeve == 2){
        printf("Assistir ao filme minecraft\n");
     }

     if (TipoFilme == 2){
        printf("Escolha entre terror ou acao\n");
        printf("1 - terror\n");
        printf("2 - acao\n");
        scanf("%f", &EscolhaIntenso);
     }

    //  else if (EscolhaIntenso = 1){
    //     printf("Escolher entre terror psicologico OU terro sobrenatural");
    //     printf("1 - terror psicologico");
    //     printf("2 - terro sobrenatural");
    //     scanf("%f", &EscolhaTerror);
     }
     
     if (EscolhaTerror = 1){
        printf("Assistir ao filme corra");
     }
     if (EscolhaTerror = 1){
        printf("Assistir ao filme Ana Belly");
     }


    return 0;
}