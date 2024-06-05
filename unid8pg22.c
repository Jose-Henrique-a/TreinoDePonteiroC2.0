#include <stdio.h>
int main() {
    
int *p;
int c = 22;

p = &c;
(*p)++;
printf("%d\n", *p);

*p = (*p)*10;
printf("%d\n", *p);


return 0;
}
