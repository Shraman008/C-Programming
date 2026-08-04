#include<stdio.h>
int main(){
int hours;
printf("Enter the time in 24hr format: "); 
scanf("%d",&hours);
if (hours>=4 && hours<12)
{
printf("GOOD MORNING");
} 
else if (hours>=12 && hours<14) {
printf("GOOD NOON");
} 
else if (hours>=14 && hours<18) {
printf("GOOD AFTERNOON");
}
else if (hours>=18 && hours<20)
{
printf("GOOD EVENING"); 
} 
else if (hours>=20 && hours<=24 || hours<=3) {
printf("GOOD NIGHT");
}
else
printf("U ARE A TIME TRAVELLER");
return 0;

}

