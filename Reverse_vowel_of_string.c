char* reverseVowels(char* s) {
    char *temp = malloc(strlen(s) + 1);

    int i=0,j=0;
    // collect vowel
    while(s[i]!='\0'){
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') {
            temp[j++]=s[i];
        }
        
            i++;
    }
     temp[j]='\0'; // add null

   // reset i and j
    i=0;
    j=strlen(temp)-1;

    //replace vowel in reverse order
    while(s[i]!='\0'){
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') {
            s[i]=temp[j--];
        }
            i++;
    }
    free(temp);
    return s;
}
