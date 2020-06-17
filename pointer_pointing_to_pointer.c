#include <stdio.h>

int main(void){
    int num = 520;
    int *p = &num;
    int **pp = &p; //dereferencing twice -- the value of num

    printf("num = %d\n", num);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp);

    printf("&p = %p, pp = %p\n", &p, pp); // &p = 000000000061FE08, pp = 000000000061FE08 
    printf("&num = %p, p = %p, *pp = %p\n", &num, p, *pp); //&num = 000000000061FE14, p = 000000000061FE14, *pp = 000000000061FE14

    //array of pointer
    char *books[] = {
        "C Prime Plus", 
        "C++ Prime Plus", 
        "Electrical Engineering"
    };
    char **nPrime;
    char **prime[2];

    nPrime = &books[2];
    prime[0] = &books[0];
    prime[1] = &books[1];

    //printf("");

    return 0;
}