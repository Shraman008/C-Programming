#include<stdio.h>
int main()
{
    //printf("Hello people\n");
    //int x=5;
    //int y=2;
    //int z=x/y;
    //printf("%d",z);
    //float x = 7.7;
    //int y = x;
    //printf("%d\n",y);
   // float z = x - y;
    //printf("%f",z);
    float x;
    printf("Enter the decimal - ");
    scanf("%f",&x);
    int y;
    y = x;
    float z = x - y;
    printf("The required decimal is - %f",z);
    return 0;
}