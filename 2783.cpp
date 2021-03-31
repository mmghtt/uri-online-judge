#include <stdio.h>
#include <string.h>
#define MAX 112

int main(){
    int n, c, m, i, fig;
    int car[MAX];
    while(scanf("%d %d %d", &n, &c, &m) != EOF){
        memset(car, 0, sizeof(car));
        for(i = 0; i < c; i++){
            scanf("%d", &fig);
            car[fig] = 1;
        }
        while(m--){
            scanf("%d", &fig);
            if(car[fig]){
                c--;
                car[fig] = 0;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}

/*
Em ano de Copa do Mundo de Futebol, o �lbum de figurinhas oficial � sempre um grande sucesso entre crian�as e tamb�m entre adultos. Para quem n�o conhece, o �lbum cont�m espa�os numerados de 1 a N para colar as figurinhas; cada figurinha, tamb�m numerada de 1 a N, � uma pequena foto de um jogador de uma das sele��es que jogar� a Copa do Mundo. O objetivo � colar todas as figurinhas nos respectivos espa�os no �lbum, de modo a completar o �lbum (ou seja, n�o deixar nenhum espa�o sem a correspondente figurinha).

Algumas figurinhas s�o carimbadas (efetivamente t�m um carimbo impresso sobre a fotografia do jogador) e s�o mais raras, mais dif�ceis de conseguir. As figurinhas s�o vendidas em envelopes fechados, de forma que o comprador n�o sabe quais figurinhas est� comprando, e pode ocorrer de comprar uma figurinha que ele j� tenha colado no �lbum.

Para ajudar os usu�rios, a empresa respons�vel pela venda do �lbum e das figurinhas quer criar um aplicativo que permita gerenciar facilmente as figurinhas que faltam para completar o �lbum.

Dados o n�mero total de espa�os e figurinhas do �lbum (N), a lista das figurinhas carimbadas e uma lista das figurinhas j� compradas (que pode conter figurinhas repetidas), sua tarefa � determinar quantas figurinhas carimbadas faltam para completar o �lbum.*/
