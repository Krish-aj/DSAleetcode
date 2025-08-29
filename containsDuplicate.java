// class Solution {
//     public boolean containsDuplicate(int[] nums) {
//         int i,j,flag=0;
//        for(i=0;i<nums.length-1;i++){
//         for(j=i+1;j<nums.length;j++){
//             if(((nums[i] | nums[j]) & (~(nums[i]& nums[j])))==0){
//                 flag++;
                
//             }
//         }
        
//        }
//        if(flag>0){
//             return true;
//         }else
//             return false;
       
//     }
// }  // this is also a correct approach but in the the time complexity is very high for large inputs

import java.util.Arrays;
class Solution {
    public boolean containsDuplicate(int[] nums) {
        int i,flag=0;
        Arrays.sort(nums);

        for(i=0;i<nums.length-1;i++){
            if(((nums[i] | nums[i+1]) & (~(nums[i]& nums[i+1])))==0){  //thhis is xor used here , instead we can also use if(nums[i]==nums[i+1]){return true}else false, because array is sorted
                flag++;
                
            }
        }
        
       
       if(flag>0){
            return true;
        }else
            return false;
       
    }
}
// best approach -->
//   class Solution {
//     public boolean containsDuplicate(int[] nums) {
//         Arrays.sort(nums);
//         for(int i = 1; i<nums.length; i++){
//             if(nums[i] == nums[i-1])  { return true;} 
//         }
//         return false;
//     }
// }
