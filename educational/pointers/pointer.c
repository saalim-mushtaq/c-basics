#include<stdio.h>

void main(){
    int i=200;int* pointer;pointer=&i;
    printf("%d\n",i);
    printf("%u\n",pointer);
    printf("%u\n",&i);
    printf("%u\n",&pointer);
    printf("%d\n",*pointer);
    printf("%d\n",*(&i));
}