#include<stdio.h>

struct student{
    int regno;
    char sname[20];
    float avg;
};

int main(){
    char *cptr;
    int *iptr;
    struct students* sptr;
    printf("size of char is %ld\n",sizeof (cptr));
    printf("size of int* is %ld\n",sizeof(iptr));
    printf("size of student is %ld\n",sizeof (sptr));
    return 0;
}