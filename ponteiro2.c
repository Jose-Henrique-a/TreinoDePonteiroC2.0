//https://www.youtube.com/watch?v=1Hgl4TU8CB0

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
    printf("---------------------- Início do Programa ------ \n");
    int var = 15;
    int *ptr;

    ptr = &var;
    printf("Conteudo de var = %d \n", var);  // 15
    printf("Endereco de var  = %p\n", &var);    // 8004
    printf("Conteudo apontado por ptr = %d\n", *ptr);   // 15
    printf("Endereco apontado por ptr = %p\n", ptr);    // 8004
    printf("Endereco do ptr           = %p\n", &ptr);   // 8005
 
    printf("---------------------- Mudando o conteúdo de *ptr ----------------------------- \n");
    *ptr = 73;
    printf("Conteudo de var = %d \n", var); // 75
    printf("Endereco de var  = %p\n", &var);    // 8004
    printf("Conteudo apontado por ptr = %d\n", *ptr);   // 75
    printf("Endereco apontado por ptr = %p\n", ptr);    // 8004
    printf("Endereco do ptr           = %p\n", &ptr);   // 8005

    printf("---------------------- FIM do Programa ------ \n");
return 0 ;
}
