#include<stdio.h>
int main(){
    float salary, age, bonus;
    printf("Enter The Salary : ");
    scanf("%f",&salary);
     printf("Enter The Age : ");
    scanf("%f",&age);
    if(salary>10000){
        printf("NO BONUS");
    }
    else if(salary<10000){
        if(age>=60){
            bonus=(2000+(2*salary)/100);
            printf("The Bonus Is : %f",bonus);
        }
        else{
            bonus=2000;
            printf("The Bonus Is : %f",bonus);
        }
        }
        return 0;
    
    
}