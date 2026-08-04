#include<stdio.h>
int main(){
    int target = 8;
    int arr[8] = {1,2,5,4,5,8,9,10};
    int i = 0;
    int j = 7;
    while (i<j){
        if(arr[i]+arr[j]==target){
            printf("FOUND");
            break;
        }
        else if (arr[i]+arr[j]>target)
        j--;
        else i++;
    }
    return 0;
}