/*Leia a hora inicial e a hora final de um jogo. A seguir calcule a dura��o do jogo, 
sabendo que o mesmo pode come�ar em um dia e terminar em outro, tendo uma dura��o m�nima de 1 hora e m�xima de 24 horas.*/

#include <stdio.h>

int main()

{

    int strtTm, endTm, durationTm;

    scanf("%d %d", &strtTm, &endTm);

    durationTm = endTm - strtTm;

    if (durationTm < 0)

    {

        durationTm = 24 + (endTm - strtTm);

    }

    if (strtTm == endTm)

    {

        printf("O JOGO DUROU 24 HORA(S)\n");

    }

    else printf("O JOGO DUROU %d HORA(S)\n", durationTm);



    return 0;

}

