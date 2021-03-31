/*Escreva um programa que leia um valor inteiro N (1 < N < 1000). 
Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa..*/

#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d", &a);
    for(b=1; b<=a; b++)
    {
        c=b*b;
        d=b*b*b;
        printf("%d %d %d\n",b,c,d);
    }
    return 0;
}
