#include <stdio.h>
int main()
{
    double a,b,c=0;
    for(a=1;a<=6;a++)
    {
        scanf("%lf",&b);
        if(b>0) c++;
    }
    printf("%.0lf valores positivos\n",c);
    return 0;
}

/*Fa�a um programa que leia 6 valores. Estes valores ser�o somente negativos ou positivos (desconsidere os valores nulos). 
A seguir, mostre a quantidade de valores positivos digitados.
*/
