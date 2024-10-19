#include<stdio.h>
int main() {
    int a;
    printf("enter any number a: ");
    scanf("%d", &a);
    if (a == 0) { 

    }
     if (a > 0) {   
            if (a % 2 == 0) {
                printf("a is even positive");
            }
        else {
            printf(" a is odd negative");
        }
     }
if (a < 0){
    if (a%2 == 0) {
        printf("a is even negative");
    }
    else {
        printf("a is even negative");
    }
}
   return 0;
}
