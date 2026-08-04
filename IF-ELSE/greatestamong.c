#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the First number - ");
    scanf("%d",&a);
     printf("Enter the Second number - ");
    scanf("%d",&b);
     printf("Enter the Third number - ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is Greatest",a);
    }
    if(b>a && b>c){
        printf("%d is Greatest",b);
    }
    if(c>a && c>a){
        printf("%d is Greatest",c);
    }
    return 0;
}