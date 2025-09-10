void reverseString(char* s, int sSize) {
    int i,j;
    char buf;
    for(i=0,j=sSize-1;(i<=j &&j>=i);i++,j--){
        buf=s[i];
        s[i]=s[j];
        s[j]=buf;
    }
}
