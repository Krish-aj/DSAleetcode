/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* result=(int*)malloc(2*sizeof(int));
    //initialise -1 if not found 
    result[0]=-1;
    result[1]=-1;
    int left=0,right=numsSize-1,mid;
    // first loop finds 1st occurence afer this condition fails right comes to one index (baaju mai <--) of left
    while(left<=right){
        mid=(left+right)/2;
        if(nums[mid]>=target) right=mid-1;  // after any occurence of target is found right keeps moving left and to get baaju <-- of first occurence and if not found then search spaces halves just like binary search
        else left=mid+1;  // this is (nums[mid]<target) , so this stops exactly at first occurence
    }
    if(left>=numsSize || nums[left]!=target ) return result;  // if there is no occurence left will reach end or if no target found -1 -1 is returned
    result[0]=left;                                           // else left index is inserted into result


    // this loop searches right most occurence , it start from first occurence and goes till last i.e numsize
    right=numsSize-1;
    while(left<=right){
        mid=(left+right)/2;
        if(nums[mid]<=target) left=mid+1;  // same happens but this time comparision is opposite and left goes at (index of rightmost occurence +1)
        else right=mid-1;  // right goes till exactly rightmost occurence
    }
    result[1]=right;

    *returnSize=2;
    return result;
}
