#include<stdio.h>
void increasing(int x,int n){
    if(x>n) return;  // base case
    printf("%d\n",x); // code
    increasing(x+1,n); // recursive call
    return;
}
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}