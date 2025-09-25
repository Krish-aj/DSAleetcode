/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void merge(int* nums, int low, int mid, int high,int numsSize){
    int i,j,k,b[numsSize];
    i=k=low;
    j=mid+1;
    while(i<=mid && j<=high){
        if(nums[i]<nums[j]){
            b[k++]=nums[i++];
        }else{
            b[k++]=nums[j++];
        }
    }
        while(i<=mid){
            b[k++]=nums[i++];
        }
        while(j<=high){
            b[k++]=nums[j++];
        }
        for(i=low;i<=high;i++){
            nums[i]=b[i];
        }
    
 }

 void mergesort(int* nums,int low,int high,int numsSize){
    if(low<high){
        int mid=(low+high)/2;
        mergesort(nums,low,mid,numsSize);
        mergesort(nums,mid+1,high,numsSize);
        merge(nums,low,mid,high,numsSize);
    }
 }
int* sortArray(int* nums, int numsSize, int* returnSize) {
    mergesort(nums,0,numsSize-1,numsSize);
    *returnSize = numsSize;

    return nums;
    
}
