/*Fa�a um programa que leia o nome de um vendedor, o seu sal�rio fixo e o total de vendas efetuadas por ele no m�s (em dinheiro). 
Sabendo que este vendedor ganha 15% de comiss�o sobre suas vendas efetuadas,
informar o total a receber no final do m�s, com duas casas decimais.*/

#include <stdio.h>
int main() 
{ 	
	char nome;
	
	double salario,vendas,x;
	
	scanf("%s %lf %lf", &nome, &salario, &vendas);
	
	x = salario + (15*vendas)/100;
	
	printf("TOTAL = R$ %.2f\n", x); 
	
	return 0;
}
