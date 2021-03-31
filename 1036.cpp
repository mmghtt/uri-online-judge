/*Leia 3 valores de ponto flutuante e efetue o c�lculo das ra�zes da equa��o de Bhaskara. Se n�o for poss�vel calcular as ra�zes, 
mostre a mensagem correspondente �Impossivel calcular�, 
caso haja uma divis�o por 0 ou raiz de numero negativo.*/

#include <stdio.h>
#include <math.h>
int main()
{
    double A,B,C,d,e,f,g;
    scanf ("%lf%lf%lf",&A,&B,&C);
    d=B*B-4*A*C;
    e=pow(d, .5);
    if(d<0||A==0)
        printf ("Impossivel calcular\n");
    else
    {
        f=(-B+e)/(2*A);
        g=(-B-e)/(2*A);
        printf ("R1 = %.5lf\n",f);
        printf ("R2 = %.5lf\n",g);
    }
    return 0;
}
