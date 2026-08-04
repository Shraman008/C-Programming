#include<stdio.h>
int main(){
    float Maths,Physics,Chemistry,English,Percentage;
    printf("Marks in Maths : ");
    scanf("%f",&Maths);
    printf("Marks in Physics : ");
    scanf("%f",&Physics);
    printf("Marks in Chemistry : ");
    scanf("%f",&Chemistry);
    printf("Marks in English : ");
    scanf("%f",&English);
    Percentage = (Maths+Physics+Chemistry+English)/4;
    printf("The Percentage Is : %f",Percentage);
    return 0;
}