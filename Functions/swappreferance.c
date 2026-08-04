#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x = *y;
    *y= temp;
    return;
}
int main(){
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("THE VALUE OF a AFTER SWAPPING : %d\n",a);
    printf("THE VALUE OF b AFTER SWAPPING : %d\n",b);
    return 0;
}