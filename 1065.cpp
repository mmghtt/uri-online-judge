/*Fa�a um programa que leia 5 valores inteiros. Conte quantos destes valores digitados s�o pares e mostre esta informa��o.*/
#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, contador=0;
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    if ((n1%2)==0){
        contador++;
    }
    if ((n2%2)==0){
        contador++;
    }
    if ((n3%2)==0){
        contador++;
    }
    if ((n4%2)==0){
        contador++;
    }
    if ((n5%2)==0){
        contador++;
    }
    printf("%d valores pares\n",contador);
    return 0;
}
