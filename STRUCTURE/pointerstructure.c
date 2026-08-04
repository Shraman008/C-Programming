#include<stdio.h>
#include<string.h>
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[100];
    } pokemon;

    void change(pokemon* p){
        // (*p).hp = 70;   // both (*p).something and p->something are equal
        p->hp = 70;
        (*p).attack = 80;
        (*p).speed = 110;
        (*p).tier = 70;
        (*p).tier = 'S';
        strcpy((*p).name,"Raichu");
        
     }
    int main(){
        pokemon pikachu = {60,70,100,'A',"Pikachu"};
        // pikachu.hp = 60;
        // pikachu.speed = 70;
        // pikachu.attack = 100;
        // pikachu.tier = 'A';
        // strcpy(pikachu.name,"Pikachu");

       // pokemon* x = &pikachu;  // address of pokemon datatype is stored in x

        printf("%d\n",pikachu.hp);
        printf("%d\n",pikachu.attack);
        printf("%d\n",pikachu.speed);
        printf("%c\n",pikachu.tier);  
        printf("%s\n",pikachu.name); 

        change(&pikachu);

        printf("%d\n",pikachu.hp);
        printf("%d\n",pikachu.attack);
        printf("%d\n",pikachu.speed);
        printf("%c\n",pikachu.tier);  
        printf("%s\n",pikachu.name); 
        
        return 0;
    }

    

