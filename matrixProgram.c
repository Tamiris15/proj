#include <stdio.h>
#include <stdlib.h>
#include "matrixOperations.h"

int main() {
    int rows, cols;
    char operation;
    int *matrix1, *matrix2, *result;

    // Чтение размерности матриц
    scanf("%d %d", &rows, &cols);

    // Выделение памяти для матриц
    matrix1 = (int *)malloc(rows * cols * sizeof(int));
    matrix2 = (int *)malloc(rows * cols * sizeof(int));
    result = (int *)malloc(rows * cols * sizeof(int));

    // Чтение операции
    scanf(" %c", &operation);

    // Чтение первой матрицы
    for (int i = 0; i < rows * cols; i++) {
        scanf("%d", &matrix1[i]);
    }

    // Чтение второй матрицы
    for (int i = 0; i < rows * cols; i++) {
        scanf("%d", &matrix2[i]);
    }

    // Выполнение операции
    if (operation == '+') {
        addMatrices(matrix1, matrix2, result, rows, cols);
    } else if (operation == '-') {
        subtractMatrices(matrix1, matrix2, result, rows, cols);
    } else {
        printf("Неизвестная операция\n");
        return 1;
    }

    // Вывод результата
    for (int i = 0; i < rows * cols; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Освобождение памяти
    free(matrix1);
    free(matrix2);
    free(result);

    return 0;
}
