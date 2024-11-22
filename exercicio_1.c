# include <stdio.h>
# include <string.h>

void exibeMenu () {

    printf("   DIGITE UMA OPCAO   \n");
    printf(" 1 - ADCIONAR UM NOME NA MEMORIA \n");
    printf(" 2 - REMOVER UM NOME DA MEMORIA \n");
    printf(" 3 - LISTAR OS NOMES DA MEMORIA\n");
    printf(" 4 - SAIR DO PROGRAMA\n");
    
    }

int escolheOpcao( int opcao ){
    
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
        //adicionaNome();
        break;
        case 2:
        printf("caso 2 ");
        break;
        case 3:
        printf("caso 3 ");
        break;
    default:
        break;
        }
    }


    
    int main (){

    int opcao;
    char *nomes ;


    exibeMenu();
    escolheOpcao(opcao);
    free(nomes);

}