#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include<unistd.h>//Sleep

#define SIZE 200
#define EMAIL "admin"
#define SENHA "admin"

int opcao;
char opc;
int cont = 0;
int validation = 0;

void exibirCaracter2();
void exibirCadastrar(); 
struct Pessoa listaUsuarios(struct Pessoa x);
void exibirPesquisa();
void exibirAlterar();


typedef struct {

    char nome[SIZE][50];
    char email[SIZE][50];
    int cpf[SIZE];

}Pessoa;

typedef struct {

    char email[SIZE][50];
    char senha[SIZE][50];

}Administrador;


Pessoa pessoa;

Administrador adm;



//Administrador

void administrador() {
    system("clear");
    exibirCaracter();
    printf("\n\t  Bem-Vindo, Douglas\n");
    exibirCaracter(); 

    printf("\n\n\n[1] - Cadastrar\n[2] - Pesquisar\n[3] - Alterar\n[4] - Deletar\n[5] - Sair\n>>> ");
    scanf("%i", &opcao);

    system("clear");

    switch (opcao){
    case 1:
        cadastrar();
        break;
    case 2:
        pesquisarDados();
        break;
    case 3:
        alterarUsuario(pessoa.email, pessoa.cpf, pessoa.nome);
        break;
    case 5:
        printf("\nDeseja realmente sair?\n[1] - Sair\n[*] - Não\n>>> ");
        scanf("%s", &opc);

        switch (opc){
        case '1':
            login();
            break;
        
        default:
            system("clear");
            administrador();
            break;
        }

        break;
    default:
        printf("\n\nAguardando");

        for(int i = 0; i < 3; i++) {
            printf(".");
        }

        printf("\n");
        sleep(2);
        system("clear");
        printf("\nDesculpe, ocorreu um erro!\n\n");
        sleep(3);
        administrador();
        break;
    }
}


//Cadastro

void cadastrar(){

   static int linha = 0;
   
   exibirCadastrar();

   do {
       
       printf("\n"); 
       printf("\n[1] - Continuar\n[*] - Sair\n>>> ");
       scanf("%s", &opc);

       if(opc != '1') {
           system("clear");
           administrador();
       } 

       printf("\nDigite o nome: ");
       scanf("%s", &pessoa.nome[linha]);
       printf("\nDigite o e-mail: ");
       scanf("%s", &pessoa.email[linha]);
       printf("\nDigite o CPF: ");
       scanf("%i", &pessoa.cpf[linha]);

       if(pessoa.cpf[linha] != 0) {
            for(int i = 0; i < SIZE; ++i) {
                //Verificando igualdade de Cadastro
                if(pessoa.cpf[linha] == pessoa.cpf[i]) {
                    //system("clear");
                    //printf("\nCPF já está cadastrado!\nTente novamente...\n");
                    
                    /*pessoa.nome[linha] = " ";
                    pessoa.email[linha] = " ";
                    pessoa.cpf[linha] = 0;*/

                    //cadastrar();
                    validation = 0;

                } else {
                    validation = 1;
                }
            }
            
            if(validation == 1) {
                printf("\n\n[1] - para continuar\n[*] - para sair!\n>>> ");
                scanf("%s", &opc);
                system("clear");

                cont++;

                linha++;

                if(opc != '1') {

                    administrador();
                    
                } else {
                    
                    exibirCadastrar();

                    printf("\n\nUsuários Cadastrados\n\nTotal: %i\n", linha);
                        
                    //printf("\n\nEmail: %s\nCPF: %i\n\n", pessoa.email, pessoa.cpf[linha-1]);
                    listarUsuarios(pessoa);
                    
                    printf("\n"); 
                }
            }
       
       } else {
           system("clear");
           printf("\nCPF Inválido\nExemplo de CPF: 12345678\n\n");
           cadastrar();
           
       }

   } while(opc == '1');

}


//Alterar

void alterarUsuario(Pessoa* email, Pessoa* cpf, Pessoa* nome){

    int value;

    exibirAlterar();
    
    //listarUsuarios(pessoa.email, pessoa.cpf, pessoa.nome);
    listarUsuarios(pessoa);

    printf("\n[1] - Continuar\n[*] - Sair\n>>> ");
    scanf("%s", &opc);
    system("clear");

    if(opc != '1') {
        system("clear");
        administrador();
    }

    do{
        
        exibirAlterar();

        printf("\n\nSelecionar usuário\n>>> ");
        scanf("%i", &value);

        for(int i = 0; i <= cont; i++){

            if(pessoa.cpf[i] == value && value != 0) {
                printf("\nNome: %s ", pessoa.nome[i]);
                printf("\nCPF: %i", pessoa.cpf[i]);
                printf("\nE-mail: %s", pessoa.email[i]);
                printf("\n");
                printf("\nNome: ");
                scanf("%s", &pessoa.nome[i]);
                printf("\nCPF: ");
                scanf("%i", &pessoa.cpf[i]);
                printf("\nE-mail: ");
                scanf("%s", &pessoa.email[i]);
                validation = 1;
                break;
            } else {
                validation = 0;
            }

        }

    if(validation == 0) {
        printf("\nUsuário Inválido!");
    }

    printf("\n[1] - Continuar\n[*] - Sair\n>>> ");

    scanf("%s", &opc);
    system("clear");

    } while(opc == '1');

    administrador();

}



//Mostrar Usuários

struct Pessoa listaUsuarios(struct Pessoa x) {

    if(cont > 0) {
        for(int i = 0; i < cont; i++){
            if(x.cpf[i] != 0){
                printf("\n\nNome: %s\nEmail: %s\nCPF: %i\n", x.nome[i], x.email[i], x.cpf[i]);
                exibirCaracter2();
            }
        }
    }

    return x;
    
}


//Pesquisa

void pesquisarDados(){

    //Armazenando valores para pesquisa
    int cpfPesquisa;
    char emailPesquisa[50];


    do{
        if(cont > 0) {
            exibirPesquisa();
            printf("\n\nUsuários Cadastrados\n\nTotal: %i\n", cont);
            listarUsuarios(pessoa);
        } else {
            exibirPesquisa();
            printf("\n\nNenhum usuário cadastrado até o momento...\n");
               
        }

        printf("\n\n[1] - para pesquisar\n[*] - para sair\n>>> ");
        scanf("%s", &opc);

        system("clear");

        if(opc == '1') {
            
            exibirPesquisa();  

            printf("\n\n[1] - para pesquisar por CPF\n[2] - para pesquisar por E-mail\n>>> ");
            scanf("%i", &opcao);

            switch (opcao){
        
            case 1:

                system("clear");

                exibirPesquisa();  

                printf("\n");
     
                printf("\nDigite o CPF: ");
                scanf("%i", &cpfPesquisa);
                
                printf("\nProcurando CPF %i...", cpfPesquisa);
                printf("\n");
                sleep(2);
                for(int i = 0; i < SIZE; i++){
                    if(pessoa.cpf[i] == cpfPesquisa && cpfPesquisa != 0){
                        
                        printf("\nNome: %s\nEmail: %s\nCPF: %i", pessoa.nome[i], pessoa.email[i], pessoa.cpf[i]);
                        validation = 1;
                        break;
                       
                    } else {
                        validation = 0;
                    }

                }

                if(validation == 0) {
                    printf("\nCPF %i não encontrado!\n", cpfPesquisa); 
                }
                break;

            case 2:
                system("clear");

                exibirPesquisa();  
                printf("\n");
                
                printf("\nDigite o E-mail: ");
                scanf("%s", &emailPesquisa);

                printf("\nProcurando E-mail %s...", emailPesquisa);
                printf("\n");
                sleep(2);

                for(int j = 0; j< SIZE; j++) {
                    if(strcmp(pessoa.email[j], emailPesquisa) == 0){
                        //Retornando 0 como success
                        printf("\nNome: %s\nEmail: %s\nCPF: %i", pessoa.nome[j], pessoa.email[j], pessoa.cpf[j]);
                        validation = 1;
                        break;
                    } else {
                        validation = 0;
                    }

                }

                if(validation == 0) {
                    printf("\nEmail %s não encontrado\n", emailPesquisa); 
                } 
                break;

            default:
                printf("\nOpção Invalida!!\n");
                pesquisarDados();
                break;
            }

            printf("\n\n[1] - para continuar\n[*] - para sair\n>>> ");
            scanf("%i", &opcao);

            switch (opcao){
            case 1:
                system("clear");
                pesquisarDados();
                break;
            
            default:
                system("clear");
                pesquisarDados();
                break;
            }
        } else {
            system("clear");
            administrador();
            
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

        printf("\n\n\tE-mail: ");
        scanf("%s", &adm.email);

        printf("\n\n\tSenha: ");
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
                system("clear");

                exibirCaracter();
                    printf("\n\t\tLOGIN\n");
                exibirCaracter();
                
                printf("\n\n\tE-mail: ");
                scanf("%s", &adm.email);

                printf("\n\n\tSenha: ");
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


//Strings de cabeçalho 

void exibirCaracter(){
    for(int i = 0; i < 20; i++) {
        printf("-=");
    }

}
void exibirCaracter2(){
    for(int i = 0; i < 20; i++) {
        printf("--");
    }

}

void exibirCadastrar(){
    exibirCaracter();
        printf("\n\t\tCADASTRO\n");
    exibirCaracter();
}

void exibirPesquisa() {
    exibirCaracter();
        printf("\n\t\tPESQUISA\n");
    exibirCaracter();
}

void exibirAlterar() {
    exibirCaracter();
    printf("\n\t    ALTERAR USUÁRIO\n");
    exibirCaracter();
}

