#include <stdio.h>

int main() {

    int nums[] = {1, 3, 5, 2, 1};

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < i - 1; ++j) {
            if(nums[j] > nums[j + 1]){

                int tmp = nums[j];
                nums[j] = tmp;





            }
        }
    }

    return 0;
}
