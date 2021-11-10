#include<stdio.h>

void displaytriangle(int length)
{

 int i,j,k;

 for(i=1;i<=length;i++)
 {
     for(j=5;j>i;j--)
     {
       
       printf(" ");
     }

     for (k=1;k<=i;k++)
     {
         printf("* ");
     }
     printf("\n");
 }
} 

int main()
{
    displaytriangle(5);
    return 0;





}