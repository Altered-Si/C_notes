#include <stdio.h>

void get_array(int b[10]);

void get_array(int b[10]){
    printf("sizeof b: %d\n", sizeof(b));
}

int main(void){
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    printf("sizeof a: %d\n", sizeof(a));
    get_array(a);

    return 0;
}
/*
sizeof a: 40
sizeof b: 8 -- in 64bit system, the size of pointer takes 8 bits? confirms an address is passed to the function rather than the whole array?
*/
