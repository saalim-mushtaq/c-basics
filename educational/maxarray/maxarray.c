#include<stdio.h>

int main(){

    int a[100],i,size,max;

    printf("\nenter the size of array");

    scanf("%d ",&size);

    for(i=0;i<size;i++)
    {
        printf("\nEnter number:");
        scanf("%d",&a[i]);
    }
    max=a[0];

    for(i=0;i<size;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("max value of array:%d",max);

    return 0;


    





}
