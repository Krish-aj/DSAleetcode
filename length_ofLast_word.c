#include <string.h>
int lengthOfLastWord(char* s) {
    int len=strlen(s);
    int i=len-1,count=0;        //len will be '/0' therefore len-1
    while(s[i]==' '){
            i--;            // skips space from last 
            
        } 
        
    while(i>=0 && s[i]!=' '){
        
        count++;
        i--;
    }
    return count;
}
