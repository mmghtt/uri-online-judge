/*Leia 3 valores, no caso, vari�veis A, B e C, que s�o as tr�s notas de um aluno. A seguir, calcule a m�dia do aluno, sabendo que a nota A tem peso 2,
 a nota B tem peso 3 e a nota C tem peso 5. Considere que cada nota pode ir de 0 at� 10.0, sempre com uma casa decimal.*/

#include <stdio.h>
 
int main() {
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    
    printf("MEDIA = %.1f\n", (a*2+b*3+c*5)/(3+2+5));
    
    return 0;
 }
