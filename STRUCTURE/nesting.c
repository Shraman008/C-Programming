#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    } pokemon;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[100];
    } legendarypokemon;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.normal.hp = 89;
    mewtwo.normal.speed = 110;
    

    typedef struct godpokemon{
        legendarypokemon legend;
        int specialattack;
    } godpokemon;

    godpokemon arceus;
    arceus.specialattack = 300;
    strcpy(arceus.legend.ability,"Turn anyone into stone");
    arceus.legend.normal.attack = 500;
    return 0;
}