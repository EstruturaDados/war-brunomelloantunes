#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#define nometerritorio 30
#define cortropas 10



struct territorio{
    char nome[nometerritorio];
    char cor[cortropas];
    int tropas;
};

void limparbufferentrada(){
    int c;
    while((c=getchar()) != '\n' && c != EOF);
}


int main(){


    struct territorio continente[5];
    int i;

    printf("-----Cadastro de territórios-----\n");

    for(i=0; i < 5; i++){

        printf("\nTerritório %d\n", i + 1);
        printf("Nome do território:");
        fgets(continente[i].nome, nometerritorio, stdin);
        continente[i].nome[strcspn(continente[i].nome,"\n")] = 0;
        printf("Cor do exército(ex: Azul, Verde): ");
        fgets(continente[i].cor, cortropas, stdin);
        continente[i].cor[strcspn(continente[i].cor,"\n")] = 0;
        printf("Número de tropas:");

    
        scanf("%d", &continente[i].tropas);
        limparbufferentrada();
    }
        printf("--------Territórios cadastrados--------\n\n");
    
        for (i = 0; i < 5; i++) {

            printf("Território %d\n\n", i + 1);
            printf("Nome: %s\n", continente[i].nome);
            printf("Cor: %s\n", continente[i].cor);
            printf("Tropas: %d\n", continente[i].tropas);
            printf("==================\n");

        }
    return 0;
}