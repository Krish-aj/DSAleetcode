/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int* ans=(int*)malloc((2*numsSize)*sizeof(int));
    int j;
    
    for(int i=0,j=0;i<2*numsSize;i++,j++){
        
        ans[i]=nums[j%numsSize];  // this works like cricular indexing in array
    }
    *returnSize=2*numsSize;
    return ans;
}
