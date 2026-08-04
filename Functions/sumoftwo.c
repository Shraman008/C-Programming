#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int a,b;
    printf("Enter the 1st Number : ");
    scanf("%d",&a);
    printf("Enter the 2nd Number : ");
    scanf("%d",&b);
    int sum =add(a,b);
    printf("%d",sum);
    return 0;
}