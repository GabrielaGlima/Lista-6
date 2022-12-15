/*9. Um ponteiro pode ser usado para dizer a uma função onde ela deve depositar o
resultado de seus cálculos. Escreva uma função “minutosHoras” que converta
minutos em horas-e-minutos. A função recebe um inteiro “totalMinutos” e os
endereços de duas variáveis inteiras (“horas” e “minutos”) deveram retornar o
total de horas e minutos correspondente ao "totalMinutos”.*/
#include <stdio.h>

void minutosHoras(int totalMinutos, int *horas, int *minutos){
    *horas = totalMinutos /60;
    *minutos = totalMinutos % 60;
}

int main(){
    int totalMinutos = 90;
    int horas, minutos;
    minutosHoras(totalMinutos, &horas, &minutos);

    printf("%d minutos = %dh:%d", totalMinutos, horas, minutos);

    return 0;
}
