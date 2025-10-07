void rotate(int* nums, int numsSize, int k) {
    if(k==0 || numsSize<=1) return;  // handle edge cases
    int i,j;
    k=k%numsSize; //see below
    
    int *copy=(int*)malloc(numsSize*sizeof(int));
    
    for(int i=0;i<numsSize;i++){
        copy[i]=nums[i];
    }
    
    for(i=numsSize-k,j=0;i<numsSize;i++,j++){   //rotate the last element to front k times
        nums[j]=copy[i];
    }
    for(i=0;i<numsSize-k;i++,j++){   // shifts front element to right numsSize - k times
        nums[j]=copy[i];
    }
    
}



/*

nums = [1, 2, 3, 4, 5]
numsSize = 5
k = 7


k = k % numsSize;  // 7 % 5 = 2
Now it will only rotate 2 times,
because rotating 7 times is the same as rotating 2 times. */
