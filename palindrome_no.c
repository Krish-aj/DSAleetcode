bool isPalindrome(int x) {
   
    int i,j,count=0;
    int length = (x == 0) ? 1 : (int)log10(x) + 1;
    char s[12];              //12 beacuse integer range is 11 digits +1 null char 
    sprintf(s,"%d",x);       // convert into string
    for(i=0,j=length-1;i<=length-1,j>=0;i++,j--){       // i start from 0 and j from last then compare 
        if(s[i]==s[j]) count++;           // if matches then count ++
    }
    if(count==length){      // if palindrome then count will be equal to length because for loop will execute length times.
        return true;
    }else 
        return false;
}
