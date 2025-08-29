class Solution {
    public int singleNumber(int[] nums) {
        int x=0;
        for(int i=0;i<nums.length;i++){
            x=x^nums[i];                    // here the xor will remove all the duplicate and only single element will be left 
        }                                   // this is done in binary
                   
        
        return x;
    }
}
