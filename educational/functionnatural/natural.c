#include<stdio.h>
int addnum(int n);
int main(){
    int num;
    printf("enter any positive integer\n");
    scanf("%d",&num);
    printf("sum=%d",addnum(num));
    return 0;
}
int addnum(int n){
    if (n!=0)
    return n+addnum(n-1);
    else 
    return n;
}