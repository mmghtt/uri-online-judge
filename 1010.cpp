/*Neste problema, deve-se ler o c�digo de uma pe�a 1, o n�mero de pe�as 1, o valor unit�rio de cada pe�a 1, o c�digo de uma pe�a 2, 
o n�mero de pe�as 2 e o valor unit�rio de cada pe�a 2. Ap�s, calcule e mostre o valor a ser pago.*/

#include <stdio.h>
 
int main() {
 
    int cod1,num1,cod2,num2;
    float valor1,valor2,x;
    
    scanf("%d %d %f \n", &cod1,&num1,&valor1);
    scanf("%d %d %f \n", &cod2,&num2,&valor2);
    
    x=(num1*valor1)+(num2*valor2);
    
    printf("VALOR A PAGAR: R$ %.2f\n",x);
 
    return 0;
}
