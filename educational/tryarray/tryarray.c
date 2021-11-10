#include<stdio.h>

int main()
{
    int a[9]={65,87,54,34,85,12,76,65,73};

    int i;

    for(i=0;i<9;i++){
        printf(" %d ",a[i]);
    }
    printf("\n");

    for(i=8;i>=0;i--){
        printf(" %d ",a[i]);
    }
    return 0;


}