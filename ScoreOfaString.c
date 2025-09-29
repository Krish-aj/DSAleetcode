#include <stdlib.h>
#include <string.h>
int scoreOfString(char* s) {
    int sum=0;
    int len= strlen(s);
    for(int i=0;i<len-1;i++){
       sum+= abs(s[i]-s[i+1]);
        
    }
    return sum;
}
