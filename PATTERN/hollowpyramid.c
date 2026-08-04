#include<stdio.h>
int main(){
    int row,col,length;
    printf("Enter the length of rows : ");
    scanf("%d",&length);
    for(row=1;row<=length;row++){
        for(col=1;col<=(2*length-1);col++){
            if(row==length || row+col==length+1 || col-row==length-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}