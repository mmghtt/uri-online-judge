/*Leia um valor inteiro, que � o tempo de dura��o em segundos de um determinado evento em uma f�brica, e informe-o expresso no formato horas:minutos:segundos.*/

#include <stdio.h>

int main()
{
 int segundos;

 scanf("%d", &segundos);

 int horas = segundos / 3600;
 segundos = segundos - (horas * 3600);

 int minutos = segundos / 60;
 segundos = segundos - (minutos * 60);

 printf("%d:%d:%d\n", horas, minutos, segundos);

 return 0;
}
