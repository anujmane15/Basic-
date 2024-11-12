#include<stdio.h>
int main() 
{
   int i, a[5], b[5], c[5];
   
   printf("enter first 5 numbers:");

   for(i=0; i<5; i++) 
   {
    scanf("%d", &a[i]);
   }

   printf ("enter 2nd 5 numbers:");

   for(i=0; i<5; i++)
   {
    scanf("%d", &b[i]);
   }

   for(i=0; i<5; i++)
   {
    c[i] = a[i] + b[i];
    printf("\nthe value at index %d is: %d ", i, c[i]);

   }
 
    return 0;
}
