/*Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, c
alcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. 
As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. 
A seguir mostre a relação de notas necessárias.*/

#include <stdio.h>

int main( )

{ 
	int n1,n2, n;
	scanf("%d.%d", &n1, &n2);
	n = n1*100+n2;
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", n/10000);
	n = n%10000;
	printf("%d nota(s) de R$ 50.00\n", n/5000);
	n = n%5000;
	printf("%d nota(s) de R$ 20.00\n", n/2000);
	n = n%2000;
	printf("%d nota(s) de R$ 10.00\n", n/1000);
	n = n%1000;
	printf("%d nota(s) de R$ 5.00\n", n/500);
	n = n%500;
	printf("%d nota(s) de R$ 2.00\n", n/200);
	n = n%200;
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", n/100);
	n = n%100;
	printf("%d moeda(s) de R$ 0.50\n", n/50);
	n = n%50;	
	printf("%d moeda(s) de R$ 0.25\n", n/25);
	n = n%25;
	printf("%d moeda(s) de R$ 0.10\n", n/10);
	n = n%10;
	printf("%d moeda(s) de R$ 0.05\n", n/5);
	n = n%5;
	printf("%d moeda(s) de R$ 0.01\n", n/1);
	return 0;

}
