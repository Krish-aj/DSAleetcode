bool isMonotonic(int* nums, int numsSize) {
    bool asc=true,dsc=true;   // asume asc or dsc as true 
    
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]<nums[i+1]){
            dsc=false;         //check if asc then dsc will become false
        }
        if(nums[i]>nums[i+1]){
            asc=false;    // check if dsc then asc will become false
        }
    }

    return (asc || dsc);   // return true if asc or dsc is true i.e ( array is sorted in any of these two order  , else it will return false
 
    

}
