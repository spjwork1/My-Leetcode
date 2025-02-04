int maxAscendingSum(int* nums, int numsSize) {
    int maxSum = nums[0]; int curSum = nums[0];
    for(int i = 1; i<numsSize; i++){
        if(nums[i]>nums[i-1]){
            curSum+=nums[i];
        } else {
            curSum = nums[i];
        }
        if(curSum>maxSum){
            maxSum = curSum;
        }
    }
    return maxSum;
}