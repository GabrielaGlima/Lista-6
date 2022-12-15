/*16. Crie uma segunda função que encontrar o maior e o segundo maior elemento
em um vetor. A função deve ter o seguinte protótipo:*/
#include<stdio.h>
#include<string.h>
#define TAM 2

void dois_maiores(int v[], int n, int *p_maior, int *s_maior);

void min_max(int v[], int n, int *max, int *min);

int main(){

    int v[TAM] = {2, 1, 0}, p_maior, s_maior;

    dois_maiores(v, TAM, &p_maior, &s_maior);

    printf("O maior valor eh: %d\n", p_maior);
    printf("O segundo maior valor eh: %d\n", s_maior);

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

void dois_maiores(int v[], int n, int *p_maior, int *s_maior){
    int i;
    
    min_max(v, TAM, p_maior, s_maior);

    for(i = 0; i < n; i++){
        if(v[i] < *p_maior && v[i] > *s_maior){
            *s_maior = v[i];
        }
    }
}