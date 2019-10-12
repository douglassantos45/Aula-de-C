#include<stdio.h>
#include<stdbool.h>

#define TRUE  1
#define FALSE 0
#define MAX   20

//INICIO ESTRUTURA
typedef struct {
    int Array[MAX];
    int topo1;
    int topo2;
} PILHADUPLA;
//FIM ESTRUTURA

void iniciar(PILHADUPLA *p) {
    p->topo1 = -1;
    p->topo2 = MAX;
}

int tamanhoPilha(PILHADUPLA *p) {
    return p->topo1 + 1 + MAX - p->topo2;
}

bool inserirElemento(PILHADUPLA *p, int valor, int pilha) {
    if(pilha < 1 || pilha > 2) return FALSE;  
    if(p->topo1 + 1 == p->topo2) return FALSE; //Verify isFull

    if(pilha == 1) {
        p->topo1++;
        p->Array[p->topo1] = valor;
    } else {
        p->topo2--;
        p->Array[p->topo2] = valor;
    }
}

bool excluirElemento(PILHADUPLA *p, /*int valor,*/ int pilha) {
    if(pilha < 1 || pilha > 2) return FALSE;

    if(pilha == 1) {
        if(p->topo1 == -1) return FALSE; //Verify isEmpty
        //valor = p->Array[p->topo1];
        p->topo1--;
    } else {
        if(p->topo2 == MAX) return FALSE; //Verify isEmpty
        //valor = p->Array[p->topo2];
        p->topo2++;
    }

}

bool exibirPilha(PILHADUPLA *p, int pilha) {
    if(pilha < 1 || pilha > 2) return FALSE;
    printf("\"Pilha: ");

        if(pilha == 1) {
            for(int i = p->topo1; i >= 0; i--) {
                printf("%i ", p->Array[i]);
            }
        } else {
            for(int i = p->topo2; i < MAX; i++) {
                printf("%i ", p->Array[i]);
            }
        }

    printf("\"\n");

    return TRUE;
}

int main(int argc, char const *argv[]) {
    /* code */

    PILHADUPLA p;

    iniciar(&p);

    for(int i = 0; i < MAX; i++) {
        inserirElemento(&p, i * 10 + 1, 1);
        inserirElemento(&p, i * 10 + 1, 2);
    }

    exibirPilha(&p, 1);
    exibirPilha(&p, 2);

    excluirElemento(&p, 1);

    exibirPilha(&p, 1);

    printf("\n\n");
    return 0;
}
