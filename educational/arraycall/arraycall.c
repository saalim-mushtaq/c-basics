#include<stdio.h>

void display(int age1,int age2){
    printf("%d\n",age1);
    printf("%d\n",age2);

}


int main (){
    int ageArray[] = {2,4,8,12};

     //pass second and third element to display()
    display(ageArray[1],ageArray[2]);
    return 0;
}