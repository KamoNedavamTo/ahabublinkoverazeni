#include <stdio.h>

/**
 *sorting array by bubble sort
 *
 * @param arr array of ints
 * @param size size of array
 * @param order bool 1 = ASC, 0 = DESC
 */
void bubbleSort (int arr[], int size, int order) {

    if (!(order == 0 || order == 1)) {
        printf("Order arg must 1 or 0!!!!\n");
        return;
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if(order == 0 && arr[j] < arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr [j +1];
                arr[j + 1] = tmp;
            } else if (order == 1 && arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr [j +1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main() {

    int nums[] = {1, 3, 5, 2, 1};
/*
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5 - i- 1; ++j) {
            if(nums[j] > nums[j + 1]){

                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;

            }
        }
    }
*/
    for (int i = 0; i < 5; ++i) {
        printf("%d ", nums[i]);
    }

    printf("\n");

    bubbleSort(nums, 5, 0);


    for (int i = 0; i < 5; ++i) {
        printf("%d ", nums[i]);
    }

    return 0;
}
