#include <stdio.h>
int showItem(int *arr, int size);
int main() {
    
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    showItem(arr, size);
    return 0;
}
showItem(int *arr, int size) {
    for (int i = 0; i < size; i++){
        printf("arr[%d]= %d\n", i, *(arr + i));
    }
}
