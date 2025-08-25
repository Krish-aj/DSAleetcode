
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,k;
    int* Size=(int*)malloc(numsSize*sizeof(int));
    for(i=0;i<numsSize-1;i++){
        for(k=i+1;k<numsSize;k++){
            if(nums[i]+nums[k]==target){
                Size[0]=i;
                Size[1]=k;
               
            }
        }
       
    }
    *returnSize=2;
    return Size;
}
    
    
