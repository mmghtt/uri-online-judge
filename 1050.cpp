/*Leia um n�mero inteiro que representa um c�digo de DDD para discagem interurbana. Em seguida, informe � qual cidade o DDD pertence,
considerando a tabela abaixo:

Se a entrada for qualquer outro DDD que n�o esteja presente na tabela acima, o programa dever� informar:
DDD nao cadastrado*/

#include <stdio.h>




int main()


{


 int a;



 scanf("%i", &a);



 if(a == 61){


  printf("Brasilia\n");


 }else if(a == 71){


  printf("Salvador\n");


 }else if(a == 11){


  printf("Sao Paulo\n");


 }else if(a == 21){


  printf("Rio de Janeiro\n");


 }else if(a == 32){


  printf("Juiz de Fora\n");


 }else if(a == 19){


  printf("Campinas\n");


 }else if(a == 27){


  printf("Vitoria\n");


 }else if(a == 31){


  printf("Belo Horizonte\n");


 }else{


  printf("DDD nao cadastrado\n");


 }



 return 0;


}
