/*Calcule o consumo m�dio de um autom�vel sendo fornecidos a dist�ncia total percorrida (em Km) e o total de combust�vel gasto (em litros).*/

#include <stdio.h>
int main (){  
 
 	int x;
 	float y, z;
 	
 	scanf("%d %f", &x, &y);
 	z = x/y;
 	
 	printf("%.3f km/l\n", z);
}
