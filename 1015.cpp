/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

Distancia =.*/

#include<stdio.h>
#include<math.h>

int main()
{
    float x1,y1,x2,y2,p1,p2,res;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    p1=x2-x1;
    p2=y2-y1;
    res=sqrt((p1*p1)+(p2*p2));
    printf("%.4f\n",res);
    return 0;
}
