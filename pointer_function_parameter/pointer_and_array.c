#include <stdio.h>
#include <string.h>

int main(void){
    int a;
    int *p = &a;

    printf("Please enter an integer: ");
    scanf("%d", &a);
    printf("a = %d\n", a);

    printf("Please enter another interger: ");
    scanf("%d", p);
    printf("a = %d\n", a);

    char str[128];

    printf("Please enter your name: ");
    scanf("%s", str);

    printf("Your name is: %s\n", str);
    //the name of an array is the address of the first element in the array (array[0])
    printf("The address of str is: %p\n", str);

    char d[] = "DEC";
    int e[5] = {1, 2, 3, 4, 5};
    float f[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double g[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    //The differece between the memory address of the array elements are the size of the specific data type, e.g. int owns a size of 4 bits, double -> 8 bits
    printf("d[0] -> %p, d[1] -> %p, d[2] -> %p\n", &d[0], &d[1], &d[2]);
    printf("e[0] -> %p, e[1] -> %p, e[2] -> %p\n", &e[0], &e[1], &e[2]);
    printf("f[0] -> %p, f[1] -> %p, f[2] -> %p\n", &f[0], &f[1], &f[2]);
    printf("g[0] -> %p, g[1] -> %p, g[2] -> %p\n", &g[0], &g[1], &g[2]);
    
    /* 
    char *p = array; is the same as char *p = &array[0];
    When the pointer points to an array element, an addition or subtraction operation can be applied on the pointer variable
    p + 1: points to the next element in the array, i.e. p + 1 points to array[1] when p points to array[0]
    Why next element? When define a pointer variable, the data type it points to is stated
    */

    char array1[] = "SDK";
    char *p = array1;

    printf("*p = %c, *(p + 1) = %c, *(p + 2) = %c\n", *p, *(p + 1), *(p + 2)); //IMPORTANT: *p + 1 means the VALUE of variable that pointer p points to + 1

    //OR using the name of array to play with the pointer
    int array2[6] = {1, 2, 3, 4, 5, 6};
    printf("array2 = %d, *(array2 + 1) = %c, *(array2 + 2) = %c\n", *array2, *(array2 + 1), *(array2 + 2));

    //Use pointer to define a string, then use the a[0], a[1] to access

    char *str1 = "Space Force";
    int i, length;

    length = strlen(str1);

    for (i = 0; i < length; i++){
        printf("%c", str1[i]);
    }
    printf("\n");

    return 0;
}
