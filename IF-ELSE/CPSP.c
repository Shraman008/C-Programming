#include <stdio.h>
int main(){
    int a, b, X;
    printf("Enter the CP - ");
    scanf("%d",&a);
    printf("Enter the SP - ");
    scanf("%d",&b);
    if(a>b)
    {
    printf("LOSS");}
    if (a==b){
        printf("NO PROFIT, NO LOSS");
    }
    if (a<b){
        printf("PROFIT");
    }
    X = a - b;
    if (X<0)
    { X = X*(-1);}
    printf("\nTHE REQUIRED NET IS %d ",X);
    return 0;
}