#include <stdio.h>

int main(void){
    //void pointer can points to any type of data, any type of pointer can be assigned to a void pointer
    int num = 1024;
    int *pi = &num;
    char *ps = "Ox"; //ARRAY
    void *pv;

    pv = pi;
    printf("ps: %p, pv: %p\n", pi, pv); //same address
    printf("*pv: %d\n", *(int *)pv); //1024

    pv = ps;
    printf("ps: %p, pv: %p\n", ps, pv); // same address
    printf("*pv: %s\n", (char *)pv); //Ox

    //NULL pointer: When you are not sure which address that a pointer should be initialized to pointer to, please initialize it as NULL. When dereference the pointer, first check whether thids pointer is a NULL pointer. 
    //#define NULL ((void *)0)
    int *p1;
    int *p2 = NULL;

    printf("%d\n", *p1); //point to a random value
    printf("%d\n", *p2); //initialize the pointer p2 as a null pointer, points to an address not being used
    
    return 0;
}