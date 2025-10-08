class Solution {
    public int missingNumber(int[] nums) {
        Arrays.sort(nums);
        int range=nums.length;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=i) return i;    // if any middle number missing
        }
        return range; //if last number missing 
    }
}
