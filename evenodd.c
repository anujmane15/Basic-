#include<stdio.h>
int main ()
 {
    int a,b;

    printf("enter 1st number :");

    scanf("%d", &a);

    printf("enter 2nd number :  ");

    scanf("%d", &b);

    (a%2 == 0) ? printf("number a is even\n ") : printf("number a is odd\n");
    
    (b%2 == 0) ? printf("number b is even\n") : printf(" number b is odd\n");

return 0;

 }    