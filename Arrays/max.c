#include<stdio.h>
int main(){
    int arr[7] = {1,4,2,8,19,5,12};
    int max = arr[0];  // sabse choota number
    for(int i=1;i<=6;i++){
        if (max<arr[i])
        max = arr[i];
    }
    printf("The maximum number is : %d",max);
    return 0;
}
// #include<limits.h>
//  int max= INT_MIN;
