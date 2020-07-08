#include <stdio.h>
#include <stdarg.h>
/*
-va_list: define parameter list
-va_start: initialize parameter list
-va_arg: get the value of every parameter in the list?
-va_end: close the parameter list
*/

int sum(int n, ...); //... means parameters in the function are unsure, n defines the total number of parameter

int sum(int n, ...){
    int i, sum = 0;
    va_list vap;

    va_start(vap, n);
    for (i = 0; i < n; i++){
        sum += va_arg(vap, int); //int defines the type of the following parameters in the list
    }
    va_end(vap);

    return sum;
}

int main(void){
    int result;

    result = sum(3, 1, 2, 3);
    printf("result1 = %d\n", result); //result1 = 6

    result = sum(5, 3, 7, 6, 2, 8);
    printf("result2 = %d\n", result); //result2 = 26

    result = sum(6, -1, 100, 3, -2, 4, 99);
    printf("result3 = %d\n", result); //result3 = 203

    return 0;
}