#include <stdio.h>

void swap(int *x, int *y);

void swap(int *x, int *y){
    int temp;
    
    printf("In swap function, before swaping: x = %d, y = %d\n", *x, *y);

    temp = *x; //dereference *x gets the value stored in the passed address (in this case, the value of a)
    *x = *y;
    *y = temp;

    printf("In swap function, after swaping x = %d, y = %d\n", *x, *y);
}

int main(void){
    
    int a = 3, b = 5;
    printf("In main function, before swaping: a = %d, b = %d\n", a, b);

    swap(&a, &b); //pass two addresses to the swap function, thus the function could manipulate the variables in main function
    printf("In main function, after swaping a = %d, b = %d\n", a, b);

    return 0;
}

/*
In main function, before swaping: a = 3, b = 5
In swap function, before swaping: x = 3, y = 5
In swap function, after swaping x = 5, y = 3
In main function, after swaping a = 5, b = 3

NOT using pointer: in swap function, two formal parameters x, y are defined, with assigned two NEW address
USING pointer: two new pointers are defined, then when call swap function, the addresses of a, b in the main function are passed
so in swap function, two values of variables stored in the addresses are modified by dereferencing pointers, a.k.a. the values of a, b
*/
