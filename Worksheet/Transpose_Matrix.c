//Transpose of a Matrix:
//Write a program that initializes a [2][3] 2-d array. Call a function to transpose the matrix (2-d array). Finally, printthe arrays both before and after the conversion

#include <stdio.h>

void printColumn(int a[][], int colIndex, int rows, char when) {
    switch (when) {
        case 'B':
            printf("Values in column %d before change:\n", colIndex); break;

        case 'A':
            printf("Values in column %d after change:\n", colIndex); break;

        default: 
            printf("Invalid option\n");
            return;
    }

    for (int i = 0; i < rows; ++i) {
        printf("%d\n", a[i][colIndex]);
    }
}

void changeColumn(int a[][], int colIndex, int rows, int newValue) {
    for (int i = 0; i < rows; ++i) {
        a[i][colIndex] = newValue;
    }
}

int main() {
    int array1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
      
    };
    int array2[3][2] = {
        {1, 2}
        {3, 4}
        {5, 6}
        
    }

    int colIndexToChange = 2; // Change the values in the third column (column at index 2)
    int newValue = 20;

    printColumn(array1, colIndexToChange, 3, 'B'); // 'B' stands for Before
    changeColumn(array1, colIndexToChange, 3, newValue);
    printColumn(array1, colIndexToChange, 3, 'A'); // 'A' stands for After

    return 0;
}