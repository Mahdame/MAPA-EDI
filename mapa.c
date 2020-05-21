#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define tamanho 8

struct Pilha
{
    int ra[tamanho];
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
        for (int i = 0; i < tamanho; i++)
        {
            pilha_dois.ra[i] = pilha_um.ra[tamanho - 1 - i];
        }
        
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