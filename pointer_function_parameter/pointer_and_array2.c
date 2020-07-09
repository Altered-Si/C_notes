#include <stdio.h>

int main(void){
    
    char str[] = "The greatest lake.";
    char *target = str;
    int count = 0;
    //since the name of string also represent str[0], ++will go through all the characters int the string
    //However, the name of a string is an address, while pointer is a lvalue
    while (*target++ != '\0'){
        count++;
    }

    printf("There are %d characters.\n", count);
    
    //array of pointers
    //int *p1[5] = {1, 2, 3, 4, 5}; //array of pointers, which is an array, every element in the array is an int type pointer
    //How to initialize an array of pointers
    char **p2[5] = {
        "The greatest zone -- Unknown", 
        "Make America Great Again -- Trump", 
        "For All Mankind -- Apple Original", 
        "Never Settle -- Oneplus", 
        "Think Different -- Apple"
    }; //An easier way than using 2D-array

    for (int i = 0; i < 5; i++){
        //printf("%d\n", p1[i]);
        printf("%s\n", *p2[i]);
    }

    //a pointer of array
    
    int temp[5] = {1, 2, 3, 4, 5};
    int (*p3)[5] = temp; //Assign the address of the array to the pointer
    //OR: int (*p3)[5] = &temp;
    
    /*COMMON ERROR: int (*p2)[5] = {1, 2, 3, 4, 5}; cannot written in this form, 
    since the int type pointer points to the first element in the array rather than the whole array*/
    
    for (int i = 0; i < 5; i++){
        printf("%d\n", *(p3 + i));
        //OR: printf("%d\n", *(*p3 + i));
    }
    
    return 0;
}
