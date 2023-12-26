// THIS IS PROGRAM FOR MATRIX ADDITION , SUBTRACTION , SCALAR MULIPLICATION AND TWO MATRIX MULTIPLCATION BY C
#include <stdio.h>

int main() {
    // declare only the required array if you want to add just declare sum array only...
    int rows, columns, a, b, c, first[10][10], second[20][20], sum[10][10], sub[10][10], mult[10][10], matmult[10][10], temp;
    temp = 0;

    // CREATION OF FIRST AND SECOND MATRIX NOTE THE FIRST AND SECOND ROWS MUST BE A SQUARE MATRIX AND THE NUMBER OF COLUMNS OF THE
    // FIRST MATRIX MUST BE EQUAL TO NUMBER OF ROWS OF SECOND MATRIX
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows, &columns);

    printf("Enter the elements of the first matrix: ");
    for (a = 0; a < rows; a++)
        for (b = 0; b < columns; b++)
            scanf("%d", &first[a][b]);

    printf("Enter the elements of the second matrix: ");
    for (a = 0; a < rows; a++)
        for (b = 0; b < columns; b++)
            scanf("%d", &second[a][b]);

    // MATRIX ADDITION
    for (a = 0; a < rows; a++)
        for (b = 0; b < columns; b++)
            sum[a][b] = first[a][b] + second[a][b];

    // MATRIX SUBTRACTION
    for (a = 0; a < rows; a++)
        for (b = 0; b < columns; b++)
            sub[a][b] = first[a][b] - second[a][b];

    // MATRIX SCALAR MULTIPLICATION NOTE: For scalar multiplication create only first matrix, the second matrix is not required
    printf("Enter the number you want to multiply with matrix A: ");
    scanf("%d", &c);
    for (a = 0; a < rows; a++)
        for (b = 0; b < columns; b++)
            mult[a][b] = first[a][b] * c;

    // TWO MATRIX MULTIPLICATION (This is quite complicated not required to read for practical but knowing this is good)
    for (a = 0; a < rows; a++) {
        for (b = 0; b < columns; b++) {
            matmult[a][b] = 0;
            temp = 0;
            for (c = 0; c < rows; c++)
                temp += first[a][c] * second[c][b];
            matmult[a][b] = temp;
        }
    }

    printf("RESULTS");
    printf("The sum of the matrix: \n");
    for (a = 0; a < rows; a++)
        for (b = 0; b < columns; b++)
            printf("%d\t", sum[a][b]);
    printf("\n");

    printf("The subtraction of the matrix: \n");
    for (a = 0; a < rows; a++) {
        for (b = 0; b < columns; b++)
            printf("%d\t", sub[a][b]);
        printf("\n");
    }

    printf("The scalar multiplication of the matrix: \n");
    for (a = 0; a < rows; a++) {
        for (b = 0; b < columns; b++)
            printf("%d\t", mult[a][b]);
        printf("\n");
    }

    printf("The matrix multiplication of the matrix: \n");
    for (a = 0; a < rows; a++) {
        for (b = 0; b < columns; b++)
            printf("%d\t", matmult[a][b]);
        printf("\n");
    }

    return 0;
}
