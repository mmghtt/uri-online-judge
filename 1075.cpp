/*Leia um valor inteiro N. Apresente todos os n�meros entre 1 e 10000 que divididos por N d�o resto igual a 2.*/
#include <stdio.h>
int main()
{
    int n1,n2;
    scanf("%d",&n1);
    for(n2=2;n2<=10000;n2=n2+n1)
        printf ("%d\n",n2);
    return 0;
}

