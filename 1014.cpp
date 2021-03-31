/*Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).*/

#include <stdio.h>
int main (){  
 
 	int x;
 	float y, z;
 	
 	scanf("%d %f", &x, &y);
 	z = x/y;
 	
 	printf("%.3f km/l\n", z);
}
