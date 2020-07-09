#include <stdio.h>

int main(void){
    /* int array[i][j] = {0};
    array: name of a 2D-array, which points to 1D array array[0], also is &array[0][0]
    array + i: points to 1D-array array[i], &array[i][0]
    *array: ==*(a + 0), points to row 0 column 0, &array[0][0]
    *(array + i): points to row i column 0, points to a int type element, &array[i][0] and array[i]
    *(array + i) + j: points to row i column j, a int type element &array[i][j], a[i] + j
    */
    int array[4][5] = {0}; //2D-array is stored in 1-D form. array[4][5] can be viewed as containing 4 elements, while each of them is a 1D array containing 5 int type elements
    
    printf("sizeof int: %d\n", sizeof(int));
    printf("array address: %p\n", array);
    printf("array + 1: %p\n", array + 1); // the difference between addresses is 0x14, or 20bits --> 5 elements --> array + 1 is the address of array[1][0]

    *(array + 1) == array[1]; // address of array[1], NOT the value of array[1]
    
    //evaluation
    int array1[4][5] = {0};
    int i, j, k = 0;

    for (i = 0; i < 4; i++){
        for (j = 0; j < 5; j++){
            array1[i][j] = k++; 
        }
    }
    /*array1 = {
        {0, 1, 2, 3, 4},
        {5, 6, 7, 8, 9},
        {10, 11, 12, 13, 14},
        {15, 16, 17, 18, 19}
    }; */

    printf("*(array1 + 1): %p\n", *(array1 + 1)); //000000000061FDC4
    printf("array1[1]: %p\n", array1[1]); //000000000061FDC4
    printf("&array1[1][0]: %p\n", &array1[1][0]); //000000000061FDC4
    //similar to one-demension array, the name of an array is the address of the first element
    printf("*(array1 + 1): %d\n", *(array1 + 1)); //6421956 NAME of 1D-array array1[1], row 1 of array1, (points to row 1 of array1) also the ADDRESS of array1[1][0]
    printf("**(array1 + 1): %d\n", **(array1 + 1)); // 5, access the value of array1[1][0]

    //similarily, 
    printf("*(array1 + 2) + 3: %p\n", *(array1 + 2) + 3); //points to row 2 column 3 of array1, &array1[2][3]
    printf("**(array1 + 2) + 3 == *(array1[2] + 3) == array1[2][3]: %d\n", **(array1 + 2) + 3); // 13
    printf("*(array1 + 2) == array1[2] = %p\n", *(array1 + 2)); // points to 1D-array a[2], row 2 of array1

    /*Difference between array1 and *array1 [OR *(array1 + 0)] : 
    Although they both contain the address of array1[0][0],&array1[0][0]
    array1 views the 2D-array as one with three elements, while each of them is a 1D-array, so array1 points to array1[0], a 1D-array. That makes array1 + 1 moves to the next 1D-array (next row of 2D-array)
    *array1 views from single row of the 2D-array, points to row 0 column 0, an int type element, which is a int type element, so *(array1 + 1) will points to the next element, row 1 column 0, array1[1][0]
    */

    return 0;
}
