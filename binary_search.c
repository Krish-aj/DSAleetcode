int search(int* nums, int numsSize, int target) {
    int i,low=0,high=numsSize-1,mid;
   

    while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]==target) return mid;
        else if(target<nums[mid]) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
