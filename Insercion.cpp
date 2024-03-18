#include <iostream>

void insertionSort(int arr[], int n, bool ascending = true) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        if (ascending) {
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
        } else {
            while (j >= 0 && arr[j] < key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    int arr[10] = {12, 11, 13, 5, 6, 7, 8, 1, 2, 3};
    insertionSort(arr, 10, true);
    std::cout << "Matriz ordenada en orden ascendente: \n";
    printArray(arr, 10);

    insertionSort(arr, 10, false);
    std::cout << "Matriz ordenada en orden descendente: \n";
    printArray(arr, 10);

    return 0;
}
