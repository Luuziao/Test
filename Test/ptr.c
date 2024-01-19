#include <stdio.h>

int main(){

    long val = 1;
    long* ptr = &val;
    *(long *)(&val) = 2;
    printf("%p\n",&val); 
    printf("%p\n",ptr); 
    printf("after %d",val);
}