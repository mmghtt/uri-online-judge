/*Timelimit: 1
Leia 3 valores reais (A, B e C) e verifique se eles formam ou n�o um tri�ngulo. Em caso positivo, calcule o per�metro do tri�ngulo e apresente a mensagem:


Perimetro = XX.X


Em caso negativo, calcule a �rea do trap�zio que tem A e B como base e C como altura, mostrando a mensagem


Area = XX.X*/

#include <stdio.h>
int main()
{
    double A,B,C,D;
    scanf ("%lf%lf%lf", &A, &B, &C);
    if(A<B+C&&B<A+C&&C<A+B)
        printf("Perimetro = %.1lf\n", A+B+C);
    else
    {
        D=.5*(A+B)*C;
        printf("Area = %.1lf\n",D);
    }
    return 0;
}
