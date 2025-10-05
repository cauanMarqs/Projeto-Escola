#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void Menu_Aluno(){
    printf("\n");
    for (int i = 0; i<20; i++){
        printf("#");
    }
    printf("\n MENU DO ALUNO \n");
    for (int i = 0; i<20; i++){
        printf("#");
    }
}

void Menu_Professor(){
    printf("\n");
    for (int i = 0; i<20; i++){
        printf("#");
    }
    printf("\n MENU DO PROFESSOR \n");
    for (int i = 0; i<20; i++){
        printf("#");
    }
}

void Menu_Disciplina(){
    printf("\n");
    for (int i = 0; i<20; i++){
        printf("#");
    }
    printf("\n MENU DE DISCIPLINAS \n");
    for (int i = 0; i<20; i++){
        printf("#");
    }
}

void Menu_Busca(){
    printf("\n");
    for (int i = 0; i<20; i++){
        printf("#");
    }
    printf("\n MENU DE BUSCA \n");
    for (int i = 0; i<20; i++){
        printf("#");
    }
}

void Menu_Inicial(){

    int opcao;
    
    while (opcao == -1){

    printf("\n");
    for (int i = 0; i<20; i++){
        printf("#");
    }
    printf("\n MENU INICIAL \n");
    for (int i = 0; i<20; i++){
        printf("#");
    }
    printf("\nEscolha a opcao que deseja:\n");
    printf("0- Sair\n");
    printf("1- Acessar Menu do Aluno\n");
    printf("2- Acessar Menu do Professor\n");
    printf("3- Acessar Menu de Disciplinas\n");
    printf("4- Acessar Menu de Buscas\n");
    scanf("%d", &opcao);

    switch (opcao){

        case 0:
            opcao = -1;
            break;
        
        case 1:
            Menu_Aluno();
            break;
        
        case 2:
            Menu_Professor();
            break;

        case 3:
            Menu_Disciplina();
            break;

        case 4:
            Menu_Busca();
            break;

        default:
            printf("Opcao invalida!");
            opcao = -1;
            break;

        }
    }
}

int main(){

    Menu_Inicial();

}