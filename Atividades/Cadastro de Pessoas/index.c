#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define SIZE 200

char nome[SIZE][50];
char email[SIZE][50];
int cpf[SIZE];
int opcao;

//Cadastro
void cadastrar(){
   static int linha;

   do {
       
       exibirCaracter();
            printf("\n\t\tCADASTRO\n");
       exibirCaracter();

       printf("\n"); 
       printf("\nDigite o nome: ");
       scanf("%s", &nome[linha]);
       printf("\nDigite o e-mail: ");
       scanf("%s", &email[linha]);
       printf("\nDigite o CPF: ");
       scanf("%i", &cpf[linha]);
       printf("\nDigite 1 para continuar ou outro valor\npara sair!\n>>> ");
       scanf("%i", &opcao);
       
       linha++;

       //system("clear"); 

   } while(opcao == 1);
    
}


//Pesquisa
void pesquisarDados(){

    //Armazenando valores para pesquisa
    int cpfPesquisa;
    char emailPesquisa[50];
    do{

        printf("\nDigite 1 para pesquisar por CPF ou 2\npara pesquisar por E-mail\n>>> ");
        scanf("%i", &opcao);

        switch (opcao){
       
        case 1:
            printf("\n");
            exibirCaracter();
                printf("\n\t\tPESQUISA\n");
            exibirCaracter();

            printf("\n");

            printf("\nDigite o CPF: ");
            scanf("%i", &cpfPesquisa);
            for(int i = 0; i < SIZE; i++){
                if(cpf[i] == cpfPesquisa){
                    printf("\nNome: %s\nEmail: %s\nCPF: %i", nome[i], email[i], cpf[i]);
                }
            }
            break;
        case 2:
            printf("\n");
            exibirCaracter();
                printf("\n\t\tPESQUISA\n");
            exibirCaracter();

            printf("\n");
            
            printf("\nDigite o E-mail: ");
            scanf("%s", &emailPesquisa);
            for(int j = 0; j< SIZE; j++) {
                if(strcmp(email[j], emailPesquisa) == 0){
                     //Retornando 0 como success
                     printf("\nNome: %s\nEmail: %s\nCPF: %i", nome[j], email[j], cpf[j]);
                }
            }
            break;
        default:
            printf("\nOpção Invalida!!");
            main();
            break;
        }

        printf("\n\nDigite 1 para continuar pesquisando!\n>>> ");
        scanf("%i", &opcao);

    }while(opcao == 1);
}


//Princial
int main(){

    void exibirCaracter();

    cadastrar();
    pesquisarDados();

}

void exibirCaracter(){
    for(int i = 0; i < 20; i++) {
        printf("-=");
    }

}
