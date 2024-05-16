//https://www.youtube.com/watch?v=1Hgl4TU8CB0
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Ponteiros:   ATENÇÃO A FUNÇÃO DISPLAY NÃO ESTÁ FUNCIONANDO
    *ptr : o apontado por, conteúdo do endereço da variável que ptr aponta
    ptr  : o endereço da variável
    &ptr : o endereço do ponteiro
*/

//void display(int var, int *ptr);
void update(int *p);

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Portuguese");
    printf("---------------------- Início do Programa ------ \n");
    int var = 15;
    int *ptr;
    ptr = &var;

    //dispĺay(var, ptr);
    printf("Conteudo de var = %d \n", var); //  15
    printf("Endereco de var  = %p\n", &var);    // 8001
    printf("Conteudo apontado por ptr = %d\n", *ptr);  // 15
    printf("Endereco apontado por ptr = %p\n", ptr);    // 8001
    printf("Endereco do ptr           = %p\n", &ptr);   // 8002
    //*ptr = 73;
    update(&var);
    //display(var, ptr);
    printf("\n\n");
    printf("Conteudo de var = %d \n", var); // 16
    printf("Endereco de var  = %p\n", &var);    // 8001
    printf("Conteudo apontado por ptr = %d\n", *ptr);   // 16
    printf("Endereco apontado por ptr = %p\n", ptr);    // 8001
    printf("Endereco do ptr           = %p\n", &ptr);   // 8002
    printf("---------------------- FIM do Programa ------ \n");
return 0 ;
}
//void display(int var, int *ptr){
//}
void update(int *p){
    *p = *p+1 ;
}


