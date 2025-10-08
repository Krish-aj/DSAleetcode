void sortColors(int* nums, int numsSize) {
    int red=0,white=0,blue=0;
    int i,j=0;
    for(i=0;i<numsSize;i++){
        if(nums[i]==0) red++;
        else if(nums[i]==1) white++;
        else blue++;
    }
    for(i=0;i<red;i++) nums[j++]=0;
    for(i=0;i<white;i++) nums[j++]=1;
    for(i=0;i<blue;i++) nums[j++]=2;
} 

// bubble sort can also be used
