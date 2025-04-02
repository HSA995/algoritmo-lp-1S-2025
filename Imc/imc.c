#include <stdio.h>

float calcularIMC(float peso, float altura){
    return peso / (altura * altura);

}

int main () {
    float peso, altura, imc;


    printf("Digite o seu peso (kg) : ");
    scanf("%f", &peso);
    printf("Digite a sua Altura (m): ");
    scanf("%f", &altura);

    imc = calcularIMC (peso, altura);

    printf("O calculo do seu IMC eh: %.2f\n", imc); 

    if (imc < 18.5)
        printf("Classificaca: abaixo do peso\n");
    else if (imc >= 18.5 && imc < 24.9)
        printf("Classificacao: Peso normal\n");
    else if (imc >= 25 && imc < 29.9)
        printf("Classificacao: Sobrepeso\n");
    else if (imc >= 30 && imc < 34.9)
        printf("Classificacao: Obesidade grau 1\n");
    else if (imc >= 35 && imc < 39.9)
        printf("Classificacao: Obesidade grau 2\n");
    else 
        printf("Classificacao: Obesidade grau 3 (Morbida)\n");

    return 0;

}