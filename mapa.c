#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define tamanho 8

struct Pilha
{
    int ra[8];
    int ini;
    int top;
};

struct Pilha pilha_um;
struct Pilha pilha_dois;
int op;
int entity;

void menu_mostrar()
{
    printf("\nEscolha uma opcao:\n");
    printf("1 - Empilhar\n");
    printf("2 - Desempilhar\n");
    printf("3 - Desempilhar todos\n");
    printf("0 - Sair\n\n");
}

void pilha_um_mostrar()
{
    int i;
    printf("[ ");
    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", pilha_um.ra[i]);
    }
    printf("]\n\n");
}

void pilha_dois_mostrar()
{
    int i;
    printf("[ ");
    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", pilha_dois.ra[i]);
    }
    printf("]\n\n");
}

void push()
{
    if (pilha_um.top == tamanho)
    {
        printf("A pilha esta cheia.\n");
        system("pause");
    }
    else
    {
        printf("\nDigite um numero para empilhar:\n");
        scanf("%d", &entity);
        pilha_um.ra[pilha_um.top] = entity;
        pilha_um.top++;
    }
}

void pop()
{
    if (pilha_um.ini == pilha_um.top)
    {
        printf("\nA pilha esta vazia, nao ha nada para desempilhar.");
        system("pause");
    }
    else
    {
        pilha_um.ra[pilha_um.top - 1] = 0;
        pilha_um.top--;
    }
}

void desempilha_tudo()
{
    if (pilha_um.ini == pilha_um.top)
    {
        printf("\nA pilha esta vazia, nao ha nada para desempilhar.\n");
        system("pause");
    }
    else
    {
        pilha_dois.ra[0] = pilha_um.ra[7];
        pilha_dois.ra[1] = pilha_um.ra[6];
        pilha_dois.ra[2] = pilha_um.ra[5];
        pilha_dois.ra[3] = pilha_um.ra[4];
        pilha_dois.ra[4] = pilha_um.ra[3];
        pilha_dois.ra[5] = pilha_um.ra[2];
        pilha_dois.ra[6] = pilha_um.ra[1];
        pilha_dois.ra[7] = pilha_um.ra[0];
    }
}

int main()
{
    pilha_um.ini = 0;
    pilha_um.top = 0;
    op = 1;
    while (op != 0)
    {
        system("cls");
        pilha_um_mostrar();
        printf("\n\n");
        pilha_dois_mostrar();
        menu_mostrar();
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            desempilha_tudo();
            break;
        }
    }
    return (0);
}