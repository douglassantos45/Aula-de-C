#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

#define SIZE 200
#define EMAIL "admin"
#define SENHA "admin"

typedef struct {

    char nome[SIZE][50];
    char email[SIZE][50];
    int cpf[SIZE];

}Pessoa;

typedef struct {

    char email[SIZE][50];
    char senha[SIZE][50];

}Administrador;

int opcao;
int opc;

Pessoa pessoa;
Administrador adm;



//Administrador

void administrador() {
    exibirCaracter();
    printf("\n\tBem-Vindo, Douglas\n");
    exibirCaracter(); 

    printf("\n[1] - Cadastrar\n[2] - Pesquisar\n[3] - Alterar\n[4] - Deletar\n[5] - Sair\n>>>");
    scanf("%i", &opc);

    system("clear");

    switch (opc){
    case 1:
        cadastrar();
        break;
    case 2:
        pesquisarDados();
        break;
    case 5:
        login();
        break;
    default:
        printf("\n\nAguardando...\nDesculpe, ocorreu um erro\n\n");
        administrador();
        break;
    }
}


//Cadastro

void cadastrar(){
   static int linha;

   do {
       
       exibirCaracter();
            printf("\n\t\tCADASTRO\n");
       exibirCaracter();
       
       printf("\n"); 
       printf("\nDigite o nome: ");
       scanf("%s", &pessoa.nome[linha]);
       printf("\nDigite o e-mail: ");
       scanf("%s", &pessoa.email[linha]);
       printf("\nDigite o CPF: ");
       scanf("%i", &pessoa.cpf[linha]);
       
       printf("\n\n[1] - para continuar\n[*] - para sair!\n>>> ");
       scanf("%i", &opcao);
       system("clear");

       linha++;

       //int cpf = pessoa.cpf;
       printf("\nUsuários Cadastrados\n");
       exibirCaracter(); 
       printf("\n\nEmail: %s\nCPF: %i\n\n", pessoa.email, pessoa.cpf[linha-1]);

       //system("clear"); 

   } while(opcao == 1);

   
}

//Usuáriosclear
/*
void listarUsuarios(Pessoa* email, Pessoa* cpf) {

    printf("\nUsuários Cadastrados");
    exibirCaracter();
    //printf("\n\nEmail: %s\nCPF: %i\n\n", email, cpf);
    //Retornando 0 como success
                    system("clear");

                    administrador();
                    pesquisarDados();
    for(int i = 0; i < SIZE; i++){
        printf("\nNome: %s\nEmail: %s\nCPF: %i", email[i], cpf[i]);
    }
}*/


//Pesquisa

void pesquisarDados(){

    //Armazenando valores para pesquisa
    int cpfPesquisa;
    char emailPesquisa[50];
    do{

        int sair;
        printf("\n\n[1] - para pesquisar\n[*] - para sair\n>>> ");
        scanf("%i", &sair);
        
        if(sair == 1) {
            printf("\n\n[1] - para pesquisar por CPF\n[2] - para pesquisar por E-mail\n>>> ");
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
                    if(pessoa.cpf[i] == cpfPesquisa){
                        printf("\nNome: %s\nEmail: %s\nCPF: %i", pessoa.nome[i], pessoa.email[i], pessoa.cpf[i]);
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
                    if(strcmp(pessoa.email[j], emailPesquisa) == 0){
                        //Retornando 0 como success
                        printf("\nNome: %s\nEmail: %s\nCPF: %i", pessoa.nome[j], pessoa.email[j], pessoa.cpf[j]);
                    }
                }
                break;

            default:
                printf("\nOpção Invalida!!");
                pesquisarDados();
                break;
            }

            printf("\n\n[1] - para continuar pesquisando\n[*] - para sair\n>>> ");
            scanf("%i", &opcao);

            switch (opcao){
            case 1:
                system("clear");
                pesquisarDados();
                break;
            
            default:
                printf("\n\nSaindo...\n\n");
                cadastrar();
                break;
            }
        } else {
            login();
        }

    }while(opcao == 1);
}


//Login

int login(){
    

    while(true) {

        system("clear");

        void exibirCaracter();

        exibirCaracter();
            printf("\n\t\tLOGIN\n");
        exibirCaracter();

        printf("\nE-mail: ");
        scanf("%s", &adm.email);

        printf("\nSenha: ");
        scanf("%s", &adm.senha);

        for(int j = 0; j< SIZE; j++) {
            if(strcmp(adm.email[j], EMAIL) == 0 && (strcmp(adm.senha[j], SENHA)) == 0){
                //Retornando 0 como success
                system("clear");

                administrador();
                pesquisarDados();
            } else {
                system("clear");

                char recover;

                exibirCaracter();
                    printf("\n\t\tLOGIN\n");
                exibirCaracter();

                printf("\nE-mail ou Senha inválido!");
                printf("\nTente novamente...\n");
                void exibirCaracter();

                printf("\nEsqueceu sua senha ou email?\n[S] - sim\n[N] - não\n>>> ");
                scanf("%s", &recover);
                
                printf("\nE-mail: ");
                scanf("%s", &adm.email);

                printf("\nSenha: ");
                scanf("%s", &adm.senha);

                if(strcmp(adm.email[j], EMAIL) == 0 && (strcmp(adm.senha[j], SENHA)) == 0){
                    //Retornando 0 como success
                    system("clear");

                    administrador();
                    pesquisarDados();
                }    
            }
        }
    }
    

}

//Princial

int main(){

    login();

}


//String
void exibirCaracter(){
    for(int i = 0; i < 20; i++) {
        printf("-=");
    }

}
