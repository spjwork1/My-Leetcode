bool isArraySpecial(int* nums, int numsSize) {
    if(numsSize<2) return true;

    for(int i = 0; i<numsSize-1; i++){
        if((nums[i]%2) == (nums[i+1]%2)){
            return false;
        }
    }
    return true;
}