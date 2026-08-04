#include<stdio.h>
#include<limits.h>
int main(){
    // for n elements we need n-1 passes
    // in each pass we find out the minimun element in the unsorted part
   int arr[7] = {7,4,5,9,8,2,1};
   int n = 7;
   printf("Unsorted array : \n");
   for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
   } 
   // selection sort
   for(int i=0;i<n-1;i++){ // n-1 passes
    int min = INT_MAX;
    int minidx = -1;

    for(int j=i;j<=n-1;j++){
        if(min>arr[j]){
        min = arr[j];
        minidx = j;
        }
    }
    // swap the min and first elements of the unsorted part
    // swaap minidx and i
    int temp = arr[minidx];
    arr[minidx] = arr[i];
    arr[i] = temp;
   }
    printf("\n");
    printf("Sorted array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);

        
    }
    return 0;
}