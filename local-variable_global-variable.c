/* variables in different function/loop cannot be accessed in another function
if the global variable is not initialized by user, it will be initialized to 0 by default.
*/
#include <stdio.h>
void func();

int a, b = 520;

void func(){
    int b;
    
    a = 880;
    b = 120;

    printf("In func, a = %d, b = %d\n", a, b); //a = 880, b = 120
}

int main(void){
    printf("In main, a = %d, b = %d\n", a, b); //a is not initialized by the user --> a = 0, b=520
    func(); 
    printf("In main, a = %d, b = %d\n", a, b); //In main, a = 880, b = 520 ? why a = 880 rather than 0?

    return 0;
}
