#include"cad_livros.c"

void deletarLivros() {

    char opc;

    printf("\nDeletar?\n>>> ");
    scanf("%s",&opc);
    
    if(opc == '1') {
        for(int i = 0; i < cont; i++){
            livros.nome_L[i][i] = "";
        }
    }else {
        cadastrar();
    }

}
