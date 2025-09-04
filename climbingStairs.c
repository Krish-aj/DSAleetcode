// space optimised dynamic programing (DP)

int climbStairs(int n) {
    if (n<=2) return n;
    int a=1,b=2,c;                // way(a)=1 {1},  way(2)=2 {1+1, 2}
    for(int i=3;i<=n;i++){
            c=a+b;                  // for n>2 the loop runs n times . c is sum of last two previous ways [way(n)=way(n-1)+way(n-2)]
            a=b;
            b=c;               // moves aage ->
        }
        return c;
}

    
    
    
    // recursive approach (not valid for large inputs)

// int climbStairs(int n) {
//     if (n<=2) return n;
//     int steps=climbStairs(n-1)+climbStairs(n-2);
//     return steps;
// }
