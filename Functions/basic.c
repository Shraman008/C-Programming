#include<stdio.h>
void england(){
    printf("You are in England\n");  // 6
    return ;        // 7
}
void australia(){
    printf("You are in Australia\n");  // 4
    england();      // calling england 5
    return ;
}
void india(){
    printf("You are in India\n");   // 2
    australia();   // calling australia 3
    return ;
}
int main(){
    india();      // calling india 1
    return 0; 
}
