#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){       //outer loop for no. of lines
        for(int j=1;j<=n;j++){   // inner loop 
        printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}