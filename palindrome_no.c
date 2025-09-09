bool isPalindrome(int x) {
    // int duplicate=x;
    int i,j,count=0;
    int length = (x == 0) ? 1 : (int)log10(x) + 1;
    char s[12];
    sprintf(s,"%d",x);
    for(i=0,j=length-1;i<=length-1,j>=0;i++,j--){
        if(s[i]==s[j]) count++;
    }
    if(count==length){
        return true;
    }else 
        return false;
}
