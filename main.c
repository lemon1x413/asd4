#include <stdio.h>

#define SIZE 17

void fillArray(double arr[], int size);

void printArray(double arr[], int size);

double maxMinRatio(double arr[], int size);

int main() {
    double P[SIZE], Q[SIZE], R[SIZE], S[SIZE];

    // Заповнення масивів
    printf("Array input P:\n");
    fillArray(P, SIZE);

    printf("Array input Q:\n");
    fillArray(Q, SIZE);

    printf("Array input R:\n");
    fillArray(R, SIZE);

    printf("Array input S:\n");
    fillArray(S, SIZE);

    // Виведення масивів та обчислення відношення max/min
    printf("\nArray P: ");
    printArray(P, SIZE);
    printf("max/min in array P: %.2f\n", maxMinRatio(P, SIZE));

    printf("\nArray Q: ");
    printArray(Q, SIZE);
    printf("max/min in array Q: %.2f\n", maxMinRatio(Q, SIZE));

    printf("\nArray R: ");
    printArray(R, SIZE);
    printf("max/min in array R: %.2f\n", maxMinRatio(R, SIZE));

    printf("\nArray S: ");
    printArray(S, SIZE);
    printf("max/min in array S: %.2f\n", maxMinRatio(S, SIZE));

    return 0;
}

void fillArray(double arr[], int size) {
    printf("Enter %d numbers in array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Number %d: ", i + 1);
        scanf("%lf", &arr[i]);
    }
}

void printArray(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

double maxMinRatio(double *arr, int size) {
    double max = arr[0];
    double min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return max / min;
}
