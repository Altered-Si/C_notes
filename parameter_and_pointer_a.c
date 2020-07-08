#include <stdio.h>

void swap(int x, int y);

void swap(int x, int y){
    int temp;
    
    printf("In swap function, before swaping: x = %d, y = %d\n", x, y);

    temp = x;
    x = y;
    y = temp;

    printf("In swap function, after swaping x = %d, y = %d\n", x, y);
}

int main(void){
    
    int a = 3, b = 5;
    printf("In main function, before swaping: a = %d, b = %d\n", a, b);

    swap(a, b);
    printf("In main function, after swaping a = %d, b = %d\n", a, b);

    return 0;
}

/*
In main function, before swaping: a = 3, b = 5
In swap function, before swaping: x = 3, y = 5
In swap function, after swaping x = 5, y = 3
In main function, after swaping a = 3, b = 5 //not swapped, since the variables in swap function are local variables
OR since the function swap does not return any value to the main function, 
*/