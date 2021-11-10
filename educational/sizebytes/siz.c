#include<stdio.h>

int main (){
    int a;
    float b;
    double c;
    char d;
            //sizeof evaluates the size of a variable
    printf("size of int: %ld bytes \n",sizeof(a));
    printf("size of float: %ld bytes \n",sizeof(b));
    printf("size of double: %ld bytes \n",sizeof(c));
    printf("size of char: %ld bytes \n",sizeof(d));

    return 0;
}