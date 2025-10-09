bool isPalindrome(char* s) {
    int i,j=0,count=0;
    // remove all character except alphabets and numbers
    for(i=0;s[i]!='\0';i++){
        if(isalnum(s[i])){
            s[j++]=s[i];
        }
    }
    s[j]='\0';  // add null at end
    int len=strlen(s);

    // check for palindrome
    for(i=0,j=len-1;i<=len-1 && j>=0;i++,j--){
        if(tolower(s[i])==tolower(s[j])) count++;  // here convert upper to lower 
    }
    return (count==len);  // if palindrome then the above loop will run exact len times so (count == len)
      
}
