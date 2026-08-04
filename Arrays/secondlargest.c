#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {1,2,3,4,4,2,1};
    int max = INT_MIN;
    int secmax = INT_MIN;
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
        secmax = max;  // sec max is now previous max
        max = arr[i];  // max is now new max
        }
        else if(secmax<arr[i] && max!=arr[i]){  // max>arr[i]
            secmax = arr[i];
        }
    }
    printf("The second maximum number is : %d",secmax);
    return 0;
}