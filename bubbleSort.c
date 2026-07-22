#include <stdio.h>

int bubbleSort(int arr[], int length) {
   for (int i = 0; i < length; i++) {
	
	for (int j = 0; j < length - i - 1; j++) {
	    if (arr[j] > arr[j + 1]) {
		int largerNum = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = largerNum;
	    }
	}
   }
}

int main () {
    
    int nums[] = {5, 4, 3, 2, 8, 7, 6};
    int length = sizeof(nums) / sizeof(nums[0]);
    
   
    for (int i = 0; i < length; i++) {
	printf("%d, ", nums[i]);
    }

    printf("\nSize of Array: %d\n", length);
    
    
    // Bubble Sort algorithm
    bubbleSort(nums, length);    
    printf("\nBubble Sorted: ");
    
    for (int i = 0; i < length; i++) {
	printf("%d ", nums[i]);
    }

    return 0;
}
