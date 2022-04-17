#include "stdio.h"
#include "stdlib.h"
#include "string.h"



 //--------------- FUNÇÃO QUE RETONRNA O TAMANHO DE UMA STRING --------------
// tipo de retorno - identificador - parâmetros
int MinhaStrlen(char str[]){ //Receber um vetor
    int tam = 0;

    while(str[tam] != '\0'){
        tam++;
    }

    return tam;
}
//__________________________________________________________________________



//----------- CRIANDO UM PROCEDIMENTO PARA IMPRIMIR UMA STRING -----------
void MinhaStrlen2(char str[]){
    int tam = 0;

    while(str[tam] != '\0'){
        tam++;
    }

    printf("%d", tam);
}
//__________________________________________________________________________



//----------- VARIAVEIS GLOBAIS, LOCAIS E ESCOPO DE VARIAVEIS -----------
int idade2 = 35; // -> Variavel global
void Imprimir(int id){
    id++;
    idade2++;
}
//__________________________________________________________________________


int main(void) {

  //--------------- FUNÇÃO QUE RETONRNA O TAMANHO DE UMA STRING --------------
    /*
    char palavra[20] = {"Bom dia. Tudo bem?"};

    printf("%d", MinhaStrlen(palavra));
    */
  //__________________________________________________________________________


    
    //----------- CRIANDO UM PROCEDIMENTO PARA IMPRIMIR UMA STRING -----------
    /*
    char palavra[20] = {"Bom dia. Tudo bem?"};

    MinhaStrlen2(palavra);
    */
//___________________________________________________________________________


    
    //----------- VARIAVEIS GLOBAIS, LOCAIS E ESCOPO DE VARIAVEIS -----------
    /*
    int idade = 25;
    
    printf("\nIdade: %d", idade);
    printf("\nIdade2: %d", idade2);
    Imprimir(idade); // Envida apenas o valor da variavel
    printf("\nIdade: %d", idade);
    printf("\nIdade2: %d", idade2);
    */
//___________________________________________________________________________


    
    
  return 0;
}
