#include<stdio.h>
#include<string.h>
int main(){
    int l,i;
    char ch;
    char str[100];
    printf("Enter the string : ");
    gets(str);
    l = strlen(str);
    for(i=0;i<l/2;i++){
        ch = str[i];
        str[i] = str[l-1-i];
        str[l-1-i] = ch;
    }
    printf("%s",str);
   
    

    return 0;
}