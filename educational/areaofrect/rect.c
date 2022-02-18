#include<stdio.h>
int areaofRect(int length,int breadth)
{
    int area;
    area = length * breadth;
    return area;
}

int main(){
    int l=50,b=10;
    int area= areaofRect(l,b);
    printf("%d\n",area);


 l=60,b=10;
     area= areaofRect(l,b);
    printf("%d\n",area);

}