int jump(int* nums, int numsSize) {
    if (numsSize <= 1)
        return 0;
    if (nums[0] == 0)
        return -1;

    int jumps = 1;
    int farthest = nums[0];
    int cur = nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (i == numsSize - 1)
            return jumps;

        farthest = (nums[i] + i > farthest) ? i + nums[i] : farthest;

        if (i == cur) {
            jumps++;
            cur = farthest;
            if (cur >= numsSize - 1)
                return jumps;
        }
    }
    return -1;
}