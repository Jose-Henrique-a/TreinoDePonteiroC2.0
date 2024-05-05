#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("---------------------- Início do Programa ------ \n");

    int *p, *p1, x = 10;
    float y = 20.0;

    p = &x;
    printf("Conteudo apontado por p: %d \n",*p);

    p1 = p;
    printf("Conteudo apontado por (p1): %d \n", *p1);

    p = &y;
    printf("Conteudo apontado por: %d \n", *p);// imprime errado 
    printf("Conteudo apontado por: %f \n", *p); // imprime errado
    printf("Conteudo apontado por: %f \n", *((float*)p)); // imprime certo
return 0 ;
}
// coments
