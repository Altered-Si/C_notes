/*
When variable is defined in the different location of a script, its functional range? is vary. 

block scope
file scope
prototype scope
function scope
*/
#include <stdio.h>

void func(void);

int main(void){
/*
block scope
the variable defined in the block is valid? in the block scope. 
It is functional from the location where the variable is defined to the right } which represents the end of the block.
The formal argument of a function also has a block scope.
ex. local variable has the block scope
*/
    int i = 100; //i1
    {
        int i = 110; //i2
        {
            int i = 120; //i3
            printf("i = %d\n", i); //i = 120
        }
        //i = 110
        {
            int i = 130; //i4
            printf("i = %d\n", i); //i = 130
        }
        printf("i = %d\n", i); //i = 110
    }
    printf("i = %d\n", i); //i = 100

/*
file scope
any identifer defined outside of a block has a file scope. It is accessible from the declaration location to the end of the file
ex. global variable and function name have the file scope
*/
    func();
    extern int count;
    count++;
    printf("In main, count = %d\n", count);
    return 0;
}
int count;

void func(void){
    count++;
    printf("In func, count = %d\n", count);
}
