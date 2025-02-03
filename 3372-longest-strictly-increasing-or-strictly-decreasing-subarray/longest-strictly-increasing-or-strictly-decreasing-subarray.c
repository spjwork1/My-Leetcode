int longestMonotonicSubarray(int* nums, int numsSize) {
    int ans = 1;
    int asc = 1;
    int des = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i - 1] > nums[i]) {
            des += 1;
            asc = 1;
        } else if (nums[i] > nums[i - 1]) {
            asc += 1;
            des = 1;
        } else {
            asc = 1;
            des = 1;
        }

        ans =
            (asc > des) ? ((asc > ans) ? asc : ans) : ((des > ans) ? des : ans);
    }
    return ans;
}