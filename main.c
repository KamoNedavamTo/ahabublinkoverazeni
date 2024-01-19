#include <stdio.h>

int main() {

    int nums[] = {1, 3, 5, 2, 1};

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5 - i- 1; ++j) {
            if(nums[j] > nums[j + 1]){

                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;

            }
        }
    }

    for (int i = 0; i < 5; ++i) {
        printf("%d", nums[i]);
    }

    return 0;
}
