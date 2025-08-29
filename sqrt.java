// class Solution {
//     public int mySqrt(int x) {
//         int root=(int)Math.pow(x,0.5);
//         return root;
//     }
// }

class Solution {
    public int mySqrt(int x) {
       long root=x;
       while(root*root>x){
        root=(root+x/root)/2;
       }
       return (int)root;
    }
}
