#include "matrixOperations.h"

void addMatrices(int *matrix1, int *matrix2, int *result, int rows, int cols) {
    for (int i = 0; i < rows * cols; i++) {
        result[i] = matrix1[i] + matrix2[i];
    }
}

void subtractMatrices(int *matrix1, int *matrix2, int *result, int rows, int cols) {
    for (int i = 0; i < rows * cols; i++) {
        result[i] = matrix1[i] - matrix2[i];
    }
}
