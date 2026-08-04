#include<stdio.h>
int main(){
    int arr[5],i;
    int sum = 0;
    for( i=0;i<=4;i++){
        printf("Enter the %d number : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=4;i++){
        sum = sum + arr[i];
    }
    printf("The Sum of the Array is : %d",arr[i]);
    return 0;

}