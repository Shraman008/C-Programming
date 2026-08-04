#include<stdio.h>
int main(){
    struct pokemon{  // user defined data type
        int hp;
        int attack;
        int speed;
        int tier;  // S,A,B,C,D
    } pikachu, charizard;
    //struct pokemon pikachu;
        printf("Enter the attack of pikachu : ");
        scanf("%d",&pikachu.attack);
        pikachu.hp = 50;
        pikachu.speed = 100;
        pikachu.tier = 'A';
        printf("%d",pikachu.attack);

    // struc pokemon charizard;
        charizard.attack = 130;
        charizard.hp = 90;
        charizard.speed = 60;
        charizard.tier = 'S';    
        return 0;
    }
