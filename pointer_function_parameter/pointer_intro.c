#include <stdio.h>

int main(void){
    /*pointer variable: a variable stores/points the address of another variable
    pointer is a data type, who owns a certain size in the memory, depending on the compiler and system architecture

    Applying the * operator to a pointer yields the value stored in the pointed-to object (in this case, memory address)
    Applying the & operator to a variable yields the address that the parameter located*/

    char a = 'a'; 
    int b = 5;
    char *pa = &a; //define a pointer variable pa to store an address, while identifies the type of data the address points to
    int *pb = &b; //Address of b is assigned to pointer pb

    printf("a = %c, b = %d\n", *pa, *pb);
    
    //manipulate the value of a and b thorugh pointer
    *pa = 'C';
    *pb += 1;
    printf("a = %c, b = %d\n", *pa, *pb);

    int x = 4;
    double y = 5.7;

    int *p = &x; // pointer p points to int type variable x, so a head address is assigned to pointer p, and it will read 4 byte a time to get access to x
    double *q = &y;


    return 0;
}
    
