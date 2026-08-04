#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int Attack;
        int HP;
        int Speed;
        char Tier;
        char name[15];
    } pokemon;
    pokemon arr[3];

    arr[0].Attack = 50;
    arr[0].HP = 100;
    arr[0].Speed = 50;
    arr[0].Tier = 'A';
    strcpy(arr[0].name,"Charizard");

    arr[1].Attack = 150;
    arr[1].HP = 100;
    arr[1].Speed = 130;
    arr[1].Tier = 'S';
    strcpy(arr[1].name,"Mewtwo");

    arr[2].Attack = 50;
    arr[2].HP = 30;
    arr[2].Speed = 80;
    arr[2].Tier = 'B';
    strcpy(arr[2].name,"Pikachu");

    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
        printf("Attack : %d\n",arr[i].Attack);
        printf("HP : %d\n",arr[i].HP);
        printf("Tier : %c\n",arr[i].Tier);
        printf("Speed : %d\n",arr[i].Speed);

    }

    return 0;
}