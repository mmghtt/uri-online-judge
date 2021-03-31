/*A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:


Salário	Percentual de Reajuste
0 - 400.00
400.01 - 800.00
800.01 - 1200.00
1200.01 - 2000.00
Acima de 2000.00

15%
12%
10%
7%
4%

Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.*/

#include <stdio.h>
int main()
{
    double a,b,c;
    int d;
    char ch='%';
    scanf("%lf", &a);
    if(a>=0 && a<=400.00)
    {
        b=a*.15;
        c=a+b;
        d=15;
    }
    else if(a>=400.01 && a<=800)
    {
        b=a*.12;
        c=a+b;
        d=12;
    }
    else if(a>=800.01 && a<=1200)
    {
        b=a*.10;
        c=a+b;
        d=10;
    }
    else if(a>=1200.01 && a<=2000)
    {
        b=a*.07;
        c=a+b;
        d=7;
    }
    else if(a>2000)
    {
        b=a*.04;
        c=a+b;
        d=4;
    }
    printf("Novo salario: %.2lf\n",c);
    printf("Reajuste ganho: %.2lf\n",b);
    printf("Em percentual: %d %c\n",d,ch);
    return 0;
}
