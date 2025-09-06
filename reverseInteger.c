#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int reverse(int x) {
    // length of the integer
    int len;
    long y=x;
    if (y == 0) {
        len = 1;
    } else {
        if (y < 0) y = -y;
        len = (int)log10(y) + 1;
        
    }
   

   // initialisation
    int i=len-1, j=0;
    long val=0;
    char str[len+1];  //to store x
    char rev[len+1];  // to store reverse of x

    if(x==0) return 0;   // handle if x is 0
   
  //for x>0
    if (x >0) {
        sprintf(str, "%d", x);   // this convert integer into string
        while (i >=0) {
            rev[j++] =str[i];   // reversing string
            i--;
        }
        rev[j] ='\0';  
         val=strtol(rev, NULL, 10);  //converting back from string to long after reversing 


         //for x< 0
    } else{
        long temp= -(long)x;         // making x positive , using long to handle integer overflow
        sprintf(str,"%ld", temp);
        while (i >= 0){
            rev[j++] =str[i];       // reversing
            i--;
        }
        rev[j] ='\0';  
        val =strtol(rev, NULL, 10);   // again making long 
        val= -val;                    // and then making reversed value  negative                  
    }
     if(val< -2147483648  || val>2147483647) return 0;   // handles integer overflow     

    return (int)val;     // return reversed value in integer
}
