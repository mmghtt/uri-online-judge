/*Fa�a um programa que leia tr�s valores e apresente o maior dos tr�s valores lidos seguido da mensagem �eh o maior�. Utilize a f�rmula:



Obs.: a f�rmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto � necess�rio para chegar no resultado esperado.*/

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
