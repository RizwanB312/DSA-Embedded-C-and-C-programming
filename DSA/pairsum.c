#include <stdio.h>

int pairSum(int nums[], int left, int right, int target) {
    while (left <= right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return 1; // found
        } else if (sum > target) {
            right--;
        } else {
            left++;
        }
    }
    return 0; // not found
}

int pairsum() {
    int nums[] = {1, 2, 3, 4, 6};
    int target = 6;
    int n = sizeof(nums) / sizeof(nums[0]);

    if (pairSum(nums, 0, n - 1, target)) {
        printf("Pair found\n");
    } else {
        printf("No such pair\n");
    }

    return 0;
}