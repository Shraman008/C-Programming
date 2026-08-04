#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=n;i++){      
        for(int j=1;j<=nsp;j++){  // for spaces
        printf(" ");
        }
        nsp=nsp-1;
        for(int k=1;k<=nst;k++){   
        printf("*");
        }
        nst=nst+2;
        printf("\n");
    }

    return 0;
}