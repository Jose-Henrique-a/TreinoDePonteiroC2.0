//https://www.youtube.com/watch?v=T7DnjHiSdbE&t=641s

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Ponteiros:
    *ptr : o apontado por, conteúdo do endereço da variável que ptr aponta
    ptr  : o endereço da variável
    &ptr : o endereço do ponteiro
*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("---------------------- Início do Programa ----------------------------- \n");

    int *ptr , x ;
    ptr = &x;
    x = 10; 

    printf("Endereço de x: %p \n", &x); // 8003 
    printf("Endereço para qual ptr aponta: %p \n", ptr);    // 8003 
    printf("Conteúdo de x: %d\n", x);   // 10
    printf("Conteúdo de *ptr: %d\n", *ptr);   // 10

    printf("---------------------- Mudando o conteúdo de x ----------------------------- \n");
    x = 20;

    printf("Endereço de x: %p \n", &x); // 8003 
    printf("Endereço para qual ptr aponta: %p \n", ptr);    // 8003 
    printf("Conteúdo de x: %d\n", x);   // 20
    printf("Conteúdo de *ptr: %d\n", *ptr);   // 20

    printf("---------------------- Mudando o conteúdo de *ptr ----------------------------- \n");
    *ptr = 30;

    printf("Endereço de x: %p \n", &x); // 8003 
    printf("Endereço para qual ptr aponta: %p \n", ptr);    // 8003 
    printf("Conteúdo de x: %d\n", x);   // 30
    printf("Conteúdo de *ptr: %d\n", *ptr);   // 30
    // comentário
   
return 0 ;
}
