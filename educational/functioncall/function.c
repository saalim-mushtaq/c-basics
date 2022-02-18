#include<stdio.h>
int max(int num1,int num2);     //function decleration

int main(){
    int a = 100;
    int b = 200;
    int result;
    result= max (a,b);  //function call
    printf("max value is %d\n",result);
    return 0;
}

int max(int num1,int num2){
    int result;
    if (num1>num2)
    result=num1;
    else
    result=num2;
    return result;
}
