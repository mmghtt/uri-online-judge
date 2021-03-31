/*Timelimit: 1
Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:


Perimetro = XX.X


Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem


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
