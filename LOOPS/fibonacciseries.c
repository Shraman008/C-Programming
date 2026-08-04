#include<stdio.h>
int main(){
    int n1=0,n2=1;
    int n3,i,elements;
    printf("Enter the Number of elements in Fibonacci Series : ");
    scanf("%d",&elements);
    printf("The Fibonacci Series will be : %d %d ",n1,n2);
    for(i=0;i<elements;++i){
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
    }