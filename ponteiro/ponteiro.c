#include <stdio.h>

int main(){
    int *p;
    int x = 42;

    p = &x;


    printf("%d\n", *p);
    printf("%d\n", x);
    printf("%d\n", &p);

    return 0;
}