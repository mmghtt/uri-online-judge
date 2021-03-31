/*Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de tri�ngulo que estes tr�s lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
se A = B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os tr�s lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES*/

#include <stdio.h>
int main()
{
    double ara[3];
    int a,b,c=1;
    double d,e,f,g,h,A,B,C,i,j,k,l,m,n,o,p;
    scanf("%lf%lf%lf", &ara[0], &ara[1], &ara[2]);
    for(a=0; a<3; a++)
    {
        for(b=c; b<3; b++)
        {
            if(ara[a]<ara[b])
            {
                e=ara[b];
                ara[b]=ara[a];
                ara[a]=e;
            }
        }
        c++;
    }
    A=ara[0]; B= ara[1]; C=ara[2];
    d=B+C;
    i=B*B+C*C;
    j=A*A;

    if(A>=d)
        printf("NAO FORMA TRIANGULO\n");
    else if(i==j)
        printf("TRIANGULO RETANGULO\n");
    else if(i<j)
        printf("TRIANGULO OBTUSANGULO\n");
    else if(i>j)
        printf("TRIANGULO ACUTANGULO\n");
    if(A==B && B==C)
        printf("TRIANGULO EQUILATERO\n");
    else if(A==B || B==C || A==C)
        printf("TRIANGULO ISOSCELES\n");
    return 0;
}

