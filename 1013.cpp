/*Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:



Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.*/

#include <stdio.h>
int main (){  
int x,y,z;
scanf ("%d %d %d",&x,&y,&z);
if (x>y)
if (x>z)
printf("%d eh o maior\n",x);
if (y>x)
if (y>z)
printf("%d eh o maior\n",y);
if (z>x)
if (z>y)
printf("%d eh o maior\n",z);
}
