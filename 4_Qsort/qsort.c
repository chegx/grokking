#include <stdio.h>

void swap(int *x, int *y);
int partition(int arr[], int low, int high);
void qsort(int arr[], int low, int high);

int main() {
    int arr[] = {5, -2, 7, 8, 1, 13, 0, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, 0, len - 1);
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[high]);
    return i;
}

void qsort(int arr[], int low, int high) {
    if (low < high) {
        int pivot_index = partition(arr, low, high);
        qsort(arr, low, pivot_index - 1);
        qsort(arr, pivot_index + 1, high);
    }
}
