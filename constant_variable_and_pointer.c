#include <stdio.h>
//define a constant variable
#define PRICE 520
#define A 'a'
#define PI 3.14

int main(void){
    //OR use const keyword
    const float pi = 3.14; //cannot be modified reassigned, a read-only variable
    //Pointer pointing to a constant variable
    int num = 520;
    const int cnum = 8880;
    const int *pc = &cnum;

    printf("cnum: %d, &cum = %p\n", cnum, &cnum); //cnum: 8880, &cum = 000000000061FE0C
    printf("*pc: %d, pc: %p\n", *pc, pc); //*pc: 8880, pc: 000000000061FE0C

    /*modify the constant variable or variable that a pointer points to is legal, 
    dereferencing could only be used to READ the data that the pointer points to,
    but cannot be used to modify the data
    */
    pc = &num;
    printf("num: %d, &num: %p\n", num, &num); //num: 520, &num: 000000000061FE0C
    printf("*pc: %d, pc: %p\n", *pc, pc); //*pc: 520, pc: 000000000061FE0C

    //*pc = 1024; illegal operation
    num = 1024; //can be reassigned
    printf("*pc: %d, pc: %p\n", *pc, pc); //*pc: 1024, pc: 000000000061FE0C

    //const pointer, pointer itself cannot be modified
    int *const p = &num; //const is now the modifier of a pointer p

    *p = 1024;
    printf("*p: %d\n", *p); //*p: 1024

    /*
    p = &cnum; //assignment of read-only variable p is illegal
    printf("*p: %d\n", *p); 
    */
        /*constant pointer pointing to variable: e.g. int *const p
            pointer itself cannot be modified
            the data that the pointer pointing to can be modified
        constant pointer pointing to constant variable: e.g. const int *const p
            pointer itself cannot be modified
            the data that the pointer pointing to ALSO cannot be modified
    */
    const int *const p1 = &cnum; //the data type that the pointer points to is a const
    //*p1 = 1024; //*p1 cannot be reassigned since the data type is const
    printf("*p1: %d\n", *p1);

    //p1 = &cnum; p cannot be modified
    printf("*p1: %d\n", *p1);

    return 0;
}