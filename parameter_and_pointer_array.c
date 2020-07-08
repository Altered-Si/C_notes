#include <stdio.h>

//parameter and array in function
void get_array(int a[10]);

void get_array(int a[10]){
    for (int i = 0; i < 10; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
} //receive an address

int main(void){
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    get_array(a); //pass the address of a[0] to the get_array function, NOT pass the value directly
    
    return 0;
}
/*
a[0] = 1
a[1] = 2
a[2] = 3
a[3] = 4
a[4] = 5
a[5] = 6
a[6] = 7
a[7] = 8
a[8] = 9
a[9] = 0
*/