#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct vertex {
    struct vertex *next;
    int vertex;
    int weight;
};

struct graph {
    struct vertex **edges;
    int *distances;
    int vertexes;
};

int diff(struct graph *g) {
    int biggest;
    int smallest;
    int d;
    int i;

    biggest = INT_MIN;
    smallest = INT_MAX;
    for (i = 0; i < g->vertexes; i++) {
        d = g->distances[i];
        if (d > biggest) {
            biggest = d;
        }
        if ((d != 0) && (d < smallest)) {
            smallest = d;
        }
    }

    return biggest - smallest;
}

void insert_edge(struct vertex **v, int u, int w) {
    struct vertex *cur;
    struct vertex *tmp;

    tmp = (struct vertex *) malloc(sizeof(struct vertex));
    tmp->next = NULL;
    tmp->vertex = u;
    tmp->weight = w;

    if (*v == NULL) {
        *v = tmp;
    } else {
        cur = *v;
        while (cur->next != NULL) {
            cur = cur->next;
        }
        cur->next = tmp;
    }
}

void add_edge(struct graph *g, int u, int v, int w) {
    insert_edge(&g->edges[u], v, w);
    insert_edge(&g->edges[v], u, w);
}

int empty(struct vertex *head) {
    return head == NULL;
}

void insert_pq(struct vertex **head, int v, int w) {
    struct vertex *cur;
    struct vertex *tmp;

    tmp = (struct vertex *) malloc(sizeof(struct vertex));
    tmp->next = NULL;
    tmp->vertex = v;
    tmp->weight = w;

    if (*head == NULL) {
        *head = tmp;
    } else if ((*head)->weight > w) {
        tmp->next = *head;
        *head = tmp;
    } else {
        cur = *head;
        while ((cur->next != NULL) && (cur->next->weight < w)) {
            cur = cur->next;
        }
        tmp->next = cur->next;
        cur->next = tmp;
    }
}

struct graph* new_graph(int n) {
    struct graph *tmp;
    int i;

    tmp = (struct graph *) malloc(sizeof(struct graph));
    tmp->distances = (int *) malloc(n * sizeof(int));
    tmp->edges = (struct vertex **) malloc(n * sizeof(struct vertex *));
    for (i = 0; i < n; i++) {
        tmp->distances[i] = INT_MAX;
        tmp->edges[i] = NULL;
    }
    tmp->vertexes = n;

    return tmp;
}

struct vertex pop(struct vertex **head) {
    struct vertex *tmp;
    struct vertex r;

    r.vertex = -1;
    r.weight = -1;
    if (*head == NULL) {
        return r;
    }

    r.vertex = (*head)->vertex;
    r.weight = (*head)->weight;
    tmp = (*head)->next;
    free(*head);
    *head = tmp;

    return r;
}

void shortest_path(struct graph *g, int src) {
    struct vertex *queue;
    struct vertex *tmp;
    int u;
    int v;
    int w;

    queue = NULL;
    insert_pq(&queue, src, 0);
    g->distances[src] = 0;

    while (!empty(queue)) {
        u = pop(&queue).vertex;
        tmp = g->edges[u];
        while (tmp != NULL) {
            v = tmp->vertex;
            w = tmp->weight;
            if (g->distances[v] > (g->distances[u] + w)) {
                g->distances[v] = g->distances[u] + w;
                insert_pq(&queue, v, g->distances[v]);
            }
            tmp = tmp->next;
        }
    }
}

int main() {
    struct graph *g;
    int i;
    int m;
    int n;
    int p;
    int s;
    int u;
    int v;

    scanf("%d %d", &n, &m);
    g = new_graph(n);
    for (i = 0; i < m; i++) {
        scanf("%d %d %d", &u, &v, &p);
        add_edge(g, u - 1, v - 1, p);
    }
    scanf("%d", &s);
    shortest_path(g, s - 1);
    printf("%d\n", diff(g));

    return 0;
}



/*Os moradores das Ilhas Brasileiras Ocidentais (IBO) são assíduos jogadores do mais recente jogo online, Magos e Guerreiros. Tão competitivas se tornaram as partidas de Magos e Guerreiros na IBO, que a empresa criadora do jogo decidiu instalar em uma das ilhas um servidor dedicado apenas aos jogadores da IBO.

Entretanto, a empresa sabe que, se os jogadores acharem que o novo servidor é injusto, eles irão parar de jogar Magos e Guerreiros, gerando incontáveis perdas. Para avaliar se o novo servidor é justo, os jogadores vão comparar o desempenho do jogo na ilha que tem a conexão mais rápida e o desempenho na ilha que tem a conexão mais lenta com o novo servidor. Se a diferença de desempenho for muito grande, os residentes da ilha mais distante se sentirão injustiçados e abandonarão o jogo.

A conexão de internet da IBO funciona através de um sistema de cabos de fibra ótica. Pares de ilhas são conectados por cabos, e cada cabo toma um certo tempo (chamado de ping) para comunicar informação entre as duas partes. Quando duas ilhas se comunicam através de uma série de cabos (portanto, através de ilhas intermediárias), o ping entre elas é a soma dos pings de cada cabo no caminho. A rede da IBO foi implementada por ótimos programadores e, portanto, um par de ilhas sempre se comunica através do caminho com menor ping possível.

Dada a configuração da rede da IBO e a ilha em que a empresa deseja instalar o novo servidor, determine a diferença entre os pings da ilha com menor e maior pings até o servidor.
*/
