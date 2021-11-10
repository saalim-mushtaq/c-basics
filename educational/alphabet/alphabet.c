#include<stdio.h>

int main(){
    char data;

    printf("enter any data");

    scanf("%c",&data);

    if ((data>=97 && data<=122) || (data>=65 && data<=90))
    {
        printf("it is an alphabet");
    }
    else
    {
        printf("its not an alphabet");
    }
    
}