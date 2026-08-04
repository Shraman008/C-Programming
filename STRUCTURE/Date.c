#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    } date;
    date a,b;
    // a-> 5/12/1999
    // b-> 19/1/2023
    a.day = 19;
    a.month = 1;
    a.year = 2023;

    b.day = 19;
    b.month = 1;
    b.year = 2023;

    bool flag = true;
    if(a.day!=b.day) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;
    if (flag==true)
        printf("The dates are same");
    
    else
        printf("The dates are different");

    return 0;


}