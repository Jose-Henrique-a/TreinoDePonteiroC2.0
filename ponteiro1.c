#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("---------------------- Início do Programa ------ \n");

    //Declara uma variável int contendo o valor 10
    int c = 10;
    //Declara um ponteiro  para int
    int *p;
    //Atribui ao ponteiro o endereço da variável int 
    p = &c;
    printf("Conteudo apontado por p: %d \n",*p);

    // Atribui um novo valor à posição de memória apontada por p
    *p = 12;
    printf("Conteudo apontado por p: %d \n", *p);
    printf("Conteudo de Count(c): %d \n", c);
return 0 ;
}