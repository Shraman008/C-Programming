#include<stdio.h>
#include<stdbool.h>
int main(){  
    // outer loop signifies the no. of passes
    // inner loop signifies the no. of swapping
    // n elements in the array -> n-1 passes
    int arr[5] = {50,400,13,221,1};
    int n = 5;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // bubble sort
    for(int i=0;i<n-1;i++){
        bool flag = true; // array is sorted
        for(int j=0;j<=n-1-i;j++){  // n-1-i -> how many times the loop need to run (in the last pass there is no need to run the loop fully)
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag==true) break;
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);

        
    }
    return 0;
}