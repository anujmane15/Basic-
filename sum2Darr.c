#include<stdio.h>
int main()
{
  int a[3][4],i,j,sum=0;

  for(i=0; i<3; i++)
  {
    for(j=0; j<4; j++ )
    {
        scanf("%d", &a[i][j]);
    }
  }
  printf("Matrix is :\n");

   for(i=0; i<3; i++)
   {
    for(j=0; j<4; j++)
    {
        printf("%d\t", a[i][j]);
        sum = sum+a[i][j];
    }
    printf("\n");
   }
   printf("sum is:%d", sum);
    return 0;
}
