#include<stdio.h>
int main() {
    int a =2,b = 4;
    a = a+b;
    b = a-b;
    a = a-b;

    printf("a is: %d\t", a);
    printf(" b is: %d", b);
    return 0;
}