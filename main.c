#include <stdio.h>

int main() {

    int nums[] = {1, 3, 5, 2, 1};

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < i - 1; ++j) {
            if(nums[j] > nums[j + 1]){

                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;

            }
        }
    }

    return 0;
}
