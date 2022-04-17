#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>



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



//--------- FUNÇÃO QUE RETORNA A SOMA DE UMA LINHA E COLUNA DA MATRIZ ----------
int tam = 5; // Varialvel global
void ImprimirMatriz(int matriz[5][5]){
    int i, j;
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int SomarLinhaMatriz(int matriz[5][5], int linha){
    int coluna, soma = 0;

    for (coluna = 0; coluna < tam; coluna++){
        soma += matriz[linha][coluna]; 
    }
    
    return soma;
}

int SomarColunaMatriz(int matriz[5][5], int coluna){
    int linha, soma = 0;

    for (linha = 0; linha < tam; linha++){
        soma += matriz[linha][coluna]; 
    }
    
    return soma;
}
//____________________________________________________________________________


//-------------------- FUNÇÕES E PROCEDIMENTOS RECURSIVOS ------------------
void ImprimirRecursivo(int x){
    if(x == 0){
        printf("%d ", x);
    }
    else{
        printf("%d ", x);
        ImprimirRecursivo(x - 1);
    }
}
//____________________________________________________________________________



//--------------------------- FATORIAL RECURSIVO -----------------------------
int FatorialRecursivo(int fat){
    if(fat == 0 || fat == 1){
        return 1;
    }else{
        return fat * FatorialRecursivo(fat - 1);
    }
    
    return 0;
}
//____________________________________________________________________________


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


    //-------- FUNÇÃO QUE RETORNA A SOMA DE UMA LINHA E COLUNA DA MATRIZ ---------
    /*
    int mat[5][5];
    int i, j;

    srand(time(NULL));
    
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            mat[i][j] = rand() % 10;
        }
    }

    ImprimirMatriz(mat);

    for(i = 0; i < tam; i++){
        printf("Soma da linha %d: %d\n", i,  SomarLinhaMatriz(mat, i));
    }

    printf("\n");
    
    for(i = 0; i < tam; i++){
        printf("Soma da linha %d: %d\n", i,  SomarColunaMatriz(mat, i));
    }
    */
//__________________________________________________________________________


    
    //-------------------- FUNÇÕES E PROCEDIMENTOS RECURSIVOS ------------------
    /*
    int n;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);

    ImprimirRecursivo(n);
    */
//_______________________________________________________________________________ 



    //--------------------------- FATORIAL RECURSIVO -----------------------------
    int n;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);

    printf("%d", FatorialRecursivo(n));
    
  return 0;
}
