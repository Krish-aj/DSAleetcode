bool check(int* nums, int numsSize) {
    int i,count=0;
    for(i=0;i<numsSize;i++){
        if(nums[i]>nums[(i+1) % numsSize]) {   
            count++;
        }
    
    }
    return (count<=1);
    
}

/* if condition checks i > i+1 in circular manner i.e last element will be compared with first, 
if after rotation array can become sorted count will be exactly 1 
and if array is already sorted count will be 0  */
