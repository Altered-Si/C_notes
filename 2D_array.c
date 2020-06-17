#include <stdio.h>
#define NUM_ROW 4
#define NUM_COLS 5

int main(void){
    //2D-array is a table or matric. 2D-array is storged in one-dimension form in the memory. 
    //2D-array initialization
    int a[NUM_ROW][NUM_COLS] = {
        {5, 0, 1, 3, 0}, //row 0, column 0-4
        {6, 4, 3, 5, 2}, //row 1, column 0-4
        {4, 7, 9, 5, 3}, //row 2, column 0-4
        {1, 7, 9, 4, 4}  //row 3, column 0-4
    };
    //OR initialize all the elemets into one same value
    int b[NUM_ROW][NUM_COLS] = {0};

    //The following initialization assigned the first elements of each ROW. 
    int c[NUM_ROW][NUM_COLS] = {{1}, {5}, {9}, {13}};
    /*The output of c is {
        {1, 0, 0, 0, 0},
        {5, 0, 0, 0, 0},
        {9, 0, 0, 0, 0},
        {13, 0, 0, 0, 0}
    }*/

    //Assign values to specific elements in a 2D-array, while the unassigned elements will be automatically assign a value of 0:
    int d[3][4] = {[0][0] = 1, [1][1] = 2, [2][2] = 3};
    /*The output of d is {
        {1, 0, 0, 0},
        {0, 2, 0, 0},
        {0, 0, 3, 0}
    }*/

    //Sum all the rows in a 2D-array
    int total[NUM_ROW];
    for (int i = 0; i < NUM_ROW; i++){
        total[i] = 0;
        for (int j = 0; j < NUM_COLS; j++){
            total[i] += a[i][j];
        }
    }
    /*Practice: Identity matrix
    Write a program to initialize a square array to the identity matrix:
        The identity matrix has a 1 in every element on the diagonal from upper left to the lower right, and 0 every elsewhere*/
    int N = 4;
    int identity[N][N];
    for (int row = 0; row < N; row++){
        for (int col = 0; col < N; col++){
            if (row == col)
                identity[row][col] = 1;
            else
                identity[row][col] = 0;  
        }
    }
    for (int row = 0; row < N; row++){
        for (int col = 0; col < N; col++){
            printf("%4i", identity[row][col]);
        }
        printf("\n");
    }
    //row-col, col-row
    int e[2][3] = {
        {80, 92, 85}, 
        {78, 65, 89}
    };
    int i, j;

    for (i = 0; i <3; i++){
        for (j = 0; j < 2; j++){
            printf("e' = %d", e[j][i]);
        }
        printf("\n");
    }
    /*Output of e' is {
        {80, 78},
        {92, 65}, 
        {85, 89}
    }*/
    
    return 0;
}