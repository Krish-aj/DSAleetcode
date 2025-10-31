class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        int i=0,j=0;

        HashSet<Integer> set= new HashSet<>(); // create hash set

        while(i<nums1.length && j<nums2.length){
            if(nums1[i]==nums2[j]){
                set.add(nums1[i]);         // both arr has same value add to set (set auto removes duplicates )
                i++;            // move i and j forward
                j++;
            }else if(nums1[i]<nums2[j]) i++;  //if value not present then also move forward
            else j++;
        }
        int[] result = new int[set.size()];
        int k=0;
        for(int nums : set){                  // extract set elements into array and return
            result[k++]=nums;
        }
        return result;
    }
}
