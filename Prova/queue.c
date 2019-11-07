#include<stdio.h>
#define true  1
#define false 0

typedef struct queue {
    
    char name_e[30],
         id[15],
         f_aeronava[30],
         model_aeronava[30];
    int validation;
    int top;
    int n_element;

} Aeronave;

void create_queue(Aeronave *A) {
    A->top = -1;
    A->n_element = A->top;
}

int isEmpty(Aeronave *A) {
    return (A->top == -1);
}

int isFull(Aeronave *A) {
    return false;
}

void insert(Aeronave *A) {
   static int row = 0;
   int opc = 0;

   do {

    printf("\nDigite o nome: ");
    scanf("%s", &A->name_e[row]);
    printf("\nDigite o e-mail: ");
    scanf("%s", &A->model_aeronava[row]);
    printf("\nDigite o CPF: ");
    scanf("%s", &A->id[row]);

    
    row++;

    printf("\nContinuar?\n[1]\n[2]");
    scanf("%i", &opc);

   } while(opc == '1');
}

int main(int argc, char const *argv[]) {
    
    Aeronave *A;
    create_queue(A);
    insert(A);

    return 0;
}


