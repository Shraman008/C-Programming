#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of Rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n;j++){    // j<=i -> alphabet triangle
            int d=a+64;
            char ch=(char)d; //ch = (char)65 ->ch='A'
            printf("%c ",ch);
            a++;

        }
        printf("\n");
    }
    return 0;
}