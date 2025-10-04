int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int count=0,max=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==1) count++;                  // increase count while sequence of 1 is there
        if(nums[i]==0 || i==numsSize-1){         // stops when 0 or end of array is encountered
            if(count>max)   max=count;           // update max if count (sequence of 1) is greater than preveious one
            if(nums[i]==0) count=0;              //reset count when 0 is encountered
    }
}
return max;
}




//two important test case
// [1,1,1,0,1,0]
//[1, 1, 0, 1, 0, 1, 1, 1, 1]
