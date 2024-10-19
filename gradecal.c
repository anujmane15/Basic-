#include<stdio.h>
int main() {
    int marks;
    printf("enter your marks:");
    scanf("%d",&marks);
    
    if (marks  >= 90){
        printf("you got A grade");
    
    } else if (  marks > 90 ) {
        printf("you got B grade");

    } else if ( marks >= 80 ) {
        printf("you got C grade");
   
    } else if ( marks >= 70) {
        printf("you got D grade");
    }else  {
        printf("you got F grade");
    }
    return 0; 
}
