#include<stdio.h>

int main() {
int a, b, c;
printf("enter no a:");
scanf("%d", &a);
printf("enter no b:");
scanf("%d", &b);
printf("enter no c:");
scanf("%d", &c);
if (a > b && a > c ) {
    printf("max no. is :%d", a);
}  else if (b > a && b > c)  {
    printf("max no. is : %d", b);
}  else if (c > a && c > b) {
    printf("max no. is :%d", c);
}  else {
    printf("max value is : %d", a);
}
return 0;
}




