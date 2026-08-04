#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the First side - ");
scanf("%d",&a);
printf("Enter the Second side - ");
scanf("%d",&b);
printf("Enter the Third side - ");
scanf("%d",&c);
if (a+b>c && b+c>a && a+c>b){
    printf("VALID TRIANGLE");
}
else{
    printf("INVALID TRIANGLE");
}
    return 0;
}