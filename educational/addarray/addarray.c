#include<stdio.h>
int main(){
    int a[5];
    int b[5];
    int c[5];
    int i;

    for(i=0;i<5;i++){
        a[i]= i+100;
    }
    for(i=0;i<5;i++){
        b[i]= i+200;

    }
    for(i=0;i<5;i++){
        c[i]= a[i] + b[i];
    }
    for(i=0;i<5;i++){
        printf(" %d",c[i]);
    }
    return 0;
}