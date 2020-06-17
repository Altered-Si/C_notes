#include <stdio.h>

int main(void){
    int i = 5, j;

    j = ++i; //change the variable first then assign
    printf("i = %d, j = %d\n", i, j);

    i = 5; 
    j = i++; //first assign then change the variable
    printf("i = %d, j = %d\n", i, j);

    return 0;
}