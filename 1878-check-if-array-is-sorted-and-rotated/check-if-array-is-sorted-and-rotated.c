bool check(int* nums, int numsSize) {
    int count = 0;

    if(nums[numsSize-1]>nums[0]){
        count++;
    }
    
    for(int i = 1; i<numsSize; i++){
        if(nums[i-1]>nums[i]){
            count++;
        }
    }

    return count <= 1;
}