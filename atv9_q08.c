/*8. Crie um algoritmo que leia 3 notas de um aluno. Posteriormente, crie uma
função para atribuir a média calculada das 3 notas a um ponteiro para o tipo
adequado. Após isso, crie uma função que efetue comparações com o valor da
média e informe se o aluno foi aprovado ou reprovado mediante média >= 7.
No final, a função também deve imprimir a média alocada no ponteiro.*/
#include<stdio.h>

void calculaMedia(float nota_1, float nota_2, float nota_3, int n, float *media){
    int i;
    float acumulador = 0;
    acumulador = nota_1 + nota_2 + nota_3;

    *media = acumulador/n;
}

void imprimeSituacao(float *media){

    if(*media >= 7){
        printf("Aprovado! ");
    }else{
        printf("Reprovado! ");
    }
    printf("%.2f", *media);
}

int main(){
    float notas_1 = 1, nota_2 = 8, nota_3 = 9;
    float media;

    calculaMedia(notas_1, nota_2, nota_3, 3, &media);
    imprimeSituacao(&media);

    return 0;
}
