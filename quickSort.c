#include <stdio.h>

int partition(int array[], int start, int end) {
    int pivot = array[end];
    int i = start - 1;

    for (int j = start; j < end; j++) {
	if (array[j] < pivot) {
	    i++;
	    int temp = array[i];
	    array[i] = array[j];
	    array[j] = temp;
	}
    }
    i++;

    int temp = array[i];
    array[i] = array[end];
    array[end] = temp;
    return i;
}

void quickSort(int array[], int start, int end) {

    if (end <= start) return;
    
    int pivot = partition(array, start, end);
    quickSort(array, start, pivot -1);
    quickSort(array, pivot + 1, end);    
}


int main () {
    
    int arr[] = {8, 2, 6, 3, 9, 4, 7, 5, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    int end = length - 1; 
    
    printf("Array Before: ");
    for (int i = 0; i < length; i++) {
	printf("%d, ", arr[i]);
    }

    quickSort(arr, 0, end);
    printf("\n");

    printf("\nArray After: ");
    for (int i = 0; i < length; i++) {
	printf("%d, ", arr[i]);
    }
    printf("\n");
    return 0;
}
