/*Escreva um programa que leia tr�s valores com ponto flutuante de dupla precis�o: A, B e C. Em seguida, calcule e mostre:
a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura.
b) a �rea do c�rculo de raio C. (pi = 3.14159)
c) a �rea do trap�zio que tem A e B por bases e C por altura.
d) a �rea do quadrado que tem lado B.
e) a �rea do ret�ngulo que tem lados A e B.*/

#include <stdio.h>
 
int main() {
 
    double a,b,c,y,triangulo,circulo,trapezio,quadrado,retangulo;
          scanf("%lf %lf %lf",&a,&b,&c);
    
    double pi = 3.14159;
    triangulo = a*c/2;
    circulo = pi*c*c;
    y=a+b;
    trapezio = y*c/2;
    quadrado = b*b;
    retangulo = a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangulo,circulo,trapezio,quadrado,retangulo);
 
    return 0;
}
