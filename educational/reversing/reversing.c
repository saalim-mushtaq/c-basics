#include<stdio.h>

int main(){
  
  int a[5],i,j;

  printf("enter array elements");

  

  for(i=0;i<=5;i++)
  {
      scanf("%d ",&a[i]);
  }
   printf("reversing the array");

   for(i=5;i>0;i--)
   {
       printf("%d ",a[i]);
   }    
   return 0;
}



      
      
      