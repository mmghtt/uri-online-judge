/*Escreva um programa que leia o n�mero de um funcion�rio, seu n�mero de horas trabalhadas, 
o valor que recebe por hora e calcula o sal�rio desse funcion�rio. A seguir, mostre o n�mero e o sal�rio do funcion�rio, com duas casas decimais.*/

#include <stdio.h>
 
int main() {
 
    int funcionario,horas;
    float salario,x;
   
   scanf("%d %d %f", &funcionario,&horas,&salario);
   
   
   x = horas*salario;
   
   printf("NUMBER = %d\n",funcionario);
    printf("SALARY = U$ %.2f\n",x);
 
    return 0;
}
