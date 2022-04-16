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
    //__________________________________________________________________________
    
    
    

    
  return 0;
}
