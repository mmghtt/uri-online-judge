/*Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, 
o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas decimais.*/

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
