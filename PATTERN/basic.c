#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows : ");
    scanf("%d",&m);
    printf("Enter the number of columns : ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++){       //outer loop for no. of lines
        for(int j=1;j<=n;j++){   // inner loop for no. of stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}