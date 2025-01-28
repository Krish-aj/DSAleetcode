int findDuplicate(int* nums, int numsSize) {
    int i = 0, j;
    while (i < numsSize - 1) {  // Stop when i is at the last element
        j = i + 1;  // j starts from i + 1 for each i
        while (j < numsSize) {  // Only compare within bounds
            if (nums[i] == nums[j]) {
                return nums[j];  // Found duplicate
            }
            j++;
        }
        i++;
    }
    return -1;  // No duplicate found
}
