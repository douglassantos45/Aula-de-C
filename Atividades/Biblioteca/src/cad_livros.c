
#include "../database/struct.c"

void listarLivros(Livro* nome_L);

int cont = 0;

void cadastrar(){

    static int row = 0;

    do {

        printf("\nDigite o nome: ");
        scanf("%s", &livros.nome_L[row]);

        printf("\n[1] - Continuar Cadastrando\n[*] - Sair\n>>> ");
        scanf("%s", &opc);

        row++;
        cont++;

    }while(opc == '1');

    listarLivros(livros.nome_L);

}

void listarLivros(Livro* nome_L) {

    for(int i = 0; i < cont; i++) {
        printf("\nNome: %s", livros.nome_L[i]);
    }   
}


