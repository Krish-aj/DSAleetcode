bool rotateString(char* s, char* goal) {
    int i=0;
    if(strlen(s)!=strlen(goal)) return false;

    //outer loop is for doing compare or move (length of s) number of times
    for(int j=0;j<strlen(s);j++){
    if(strcmp(s,goal)==0){
        return true;
    }
    //left move by 1
    char temp=s[0];
    for(i=1;i<strlen(s);i++){
        s[i-1]=s[i];
    }
    s[strlen(s)-1]=temp;
}
    
return false;
}
