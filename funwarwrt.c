#include<stdio.h>
float max(float,float,float);

void main()
{  char d;
    float a,b,c;
    printf("enter 3 nos:");
    scanf("%f%f%f",&a,&b,&c);
    d=max(a,b,c);
    printf("%c",d);
}

float max(float x,float y,float z)
{
    char c;    
    if(x>y && x>z)
    {
      c =  printf("max no is:%f",x);
    }
    if(y>x && y>z)
    {
     c=   printf("max no is :%f",y);
    }
    if(z>x && z>y)
    {
      c=  printf("max no is :%f",z);
    }

    return c;
}