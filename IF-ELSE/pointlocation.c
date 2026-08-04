#include<stdio.h>
int main(){
    int x,y;
    printf("Enter The Coordinates - ");
    scanf("%d %d",&x,&y);
    if (x==0 && y==0)
    {
        printf("The Point Is Origin");
    }
    else if (x==0)
    {
        printf("The Point is Y Axis");
        }
    else if (y==0)
    {
        printf("The Point is X Axis ");
        }
    else 
    {
        printf("Neither on X Axis nor on Y Axis");
        }
    return 0;
}