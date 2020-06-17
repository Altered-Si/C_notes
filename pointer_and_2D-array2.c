#include <stdio.h>

int main(void){
    //Using pointer to access 2D-array -- Using pointer to access elements in the 2D-array from 1D-array perspective

    int array[3][4];
    int *p = &array[0][0]; //pointer p is defined as a pointer points to int, OR pointer p "believe" that it points to a 1D-array with 12 elements, each of them is int type
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            *p = i + j;
            p++;
        }
    }

    //Using pointer to access 2D-array -- Using pointer to access elements in the 2D-array from 2D-array perspective
    int array1[3][4] = {
        {1, 3, 5, 7},
        {9, 11, 13, 15}, 
        {17, 19, 21, 23}
    };
    int (*p)[4]; // define a pointer p pointing to a 1D-array containing 4 ints
    p = array1;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            *(*(p + i) + j) = i + j; //p[i][j]
        }
    }

    int array2[2][3] = {
        {0, 1, 2},
        {3, 4, 5}
    };
    int (*p1)[3] = array2;

    printf("**(p1+1): %d\n", **(p1+1)); //**(p1+1): 3
    printf("**(array2+1): %d\n", **(array2+1)); //**(array2+1): 3
    printf("array2[1][0]: %d\n", array2[1][0]); //array2[1][0]: 3
    printf("*(*(p1 + 1) + 2): %d\n", *(*(p1+1)+2)); //*(*(p1 + 1) + 2): 5
    printf("*(*(array2+1)+2): %d\n", *(*(array2+1)+2)); //*(*(array2+1)+2): 5
    printf("array2[1][2]: %d\n", array2[1][2]); //array2[1][2]: 5
    
    return 0;
}