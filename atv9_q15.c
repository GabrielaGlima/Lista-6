/*15. Escreva um programa que receba n > 0 números inteiros, armazene-os em um
vetor e mostre como saída o maior e o menor elemento deste vetor. Seu
programa deve conter uma função com o seguinte protótipo:
        void min_max(int v[], int n, int *max, int *min)*/
#include<stdio.h>
#include<string.h>
#define TAM 5

void min_max(int v[], int n, int *max, int *min);

int main(){

    int v[TAM] = {1, 2, 3, 4, 5}, max, min;

    min_max(v, TAM, &max, &min);

    printf("O maior valor eh: %d\n", max);
    printf("O menor valor eh: %d\n", min);

    system("PAUSE");
    return 0;
}

void min_max(int v[], int n, int *max, int *min){
    int i;
    
    for(i = 0; i < n; i++){
        if(i == 0){
            *max = v[i];
            *min = v[i];
        }else{
            if(v[i] > *max){
                *max = v[i];
            }else{
                if(v[i] < *min){
                    *min = v[i];
                }
            }
        }
    }
}