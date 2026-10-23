/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
int* a = (int*)malloc(2 * sizeof(int));

    a[0] = -1;
    a[1] = -1;
    *returnSize = 2;

    if(numsSize == 0){
        return a;
    }

    int st = 0, end = numsSize - 1;

    // Find the first occurrence
    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (nums[mid] == target) {
            a[0] = mid;
            end = mid - 1;  // Search left for an earlier occurrence
        }
        else if (nums[mid] < target) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    // If target is not found, return [-1, -1]
    if (a[0] == -1) {
        return a;
    }

    // Find the last occurrence
    st = 0;
    end = numsSize - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (nums[mid] == target) {
            a[1] = mid;
            st = mid + 1;  // Search right for a later occurrence
        }
        else if (nums[mid] < target) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return a;
}