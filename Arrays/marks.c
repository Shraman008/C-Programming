#include<stdio.h>
int main(){
    int marks[5],i;
    for(i=0;i<=4;i++){
      printf("Enter the marks %d : ",i+1);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<=4;i++){
    if(marks[i]<35){
            printf("%d\n",i);
        }
    }
    /*int marks[10]={95,45,62,10,35,21,56,98,22,45};
    for (int i=0;i<=9;i++){
        if (marks[i]<35){
            printf("%d ",i);
        }
    }*/
    return 0;
}