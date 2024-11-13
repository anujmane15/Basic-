#include<stdio.h>
int main() 
{
  int a[3][4],i,j;

  for(i=0; i<3; i++)
  {
    for(j=0; j<4; j++)
    {
        scanf("%d", &a[i][j]);
    }
  }
  printf("the matrix is\n\n:");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("the transpose of matrix is\n\n:");
  for(i=0; i<4; i++)
  {
    for(j=0; j<3; j++)
    {
        printf("%d\t", a[j][i]);
    }
    printf("\n");
  }

    return 0;
}