                // this is brute force approach 
// class Solution {
//     public List<List<Integer>> threeSum(int[] nums) {
//         List<List<Integer>> list = new ArrayList<>();   this is list in list type

//         for (int i = 0; i < nums.length - 2; i++) {
//             for (int j = i + 1; j < nums.length - 1; j++) {
//                 for (int k = j + 1; k < nums.length; k++) {
//                     if ((i!=j && i!=k && j!=k)&& (nums[i] + nums[j] + nums[k] == 0)) {
//                         List<Integer> row = new ArrayList<>();    // this is single list or row
//                         row.add(nums[i]);
//                         row.add(nums[j]);
//                         row.add(nums[k]);
//                         Collections.sort(row);         // sort to remove duplicate
//                         if(!l.contains(r)){list.add(row);}
                      
//                     }
//                 }
//             }
//         }
//         return list;
//     }
// }


//   o(n2)   optimal solution

class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> l = new ArrayList<>();
        Arrays.sort(nums);    // sort the array
        for (int i = 0; i < nums.length - 2; i++) {
           if(i>0 && nums[i]==nums[i-1]) continue;   // removes duplicate
           int low = i+1, high=nums.length-1;       
           while(low<high){
                int result= nums[i] + nums[low] + nums[high] ;
                    if (result == 0) {
                       l.add(Arrays.asList(nums[i],nums[low],nums[high]));   // directly adds as list of list
                    //  List<Integer> r = new ArrayList<>();
                    //     r.add(nums[i]);
                    //     r.add(nums[low]);
                    //     r.add(nums[high]);
                        
                    //     l.add(r);
                        while(low<high && nums[low]==nums[low+1]) low++;    // these both handles duplicate
                        while(low<high && nums[high]==nums[high-1]) high--;
                        low++;
                        high--;
                    }else if(result<0){ low++;}   // moves higher index because result sum higher needed (low++ because array is sorted)
                    else high--;    // moves towards lower value because result sum >0
                }
            }
            return l;
        }
        
    }

