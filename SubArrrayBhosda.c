#include <stdio.h>
int subarraysDivByK(int* nums, int numsSize, int k) {
	int i,n,j,sum,count=0;
	for(i=0; i<numsSize; i++) {
		sum=0;
		for(n=numsSize; n>=i; n--) {
			for(j=n-1; j>=i; j--) {

				sum+=nums[j];

				if(sum % k == 0) {
					count++;
				}
			}
		}
	}
	printf("%d",sum);
	printf("%d",count);
	return count;
}

int main() {
	int nums[]= {0,-5};
	int numsSize=sizeof(nums)/sizeof(nums[0]);
	int k =10;
	int result = subarraysDivByK(nums,numsSize,k);
//	printf("%d",result);
//	printf("%d",-5%10);
	return 0;
}





// code 2

#include <stdio.h>

int subarraysDivByK(int* nums, int numsSize, int k) {
    int count = 0,sum;

    // Iterate over all subarrays
    for (int i = 0; i < numsSize; i++) {
         sum = 0;
        for (int j = i; j < numsSize; j++) {
            sum += nums[j]; // Sum of subarray nums[i:j]
            
            if (sum % k == 0) {
                count++;  // If divisible by k, increment count
            }
        }
    }
printf("%d",sum);
printf("%d",count);
    return count;
}

// Driver function
int main() {
    int nums[] = {0,-5};
    int k = 10;
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = subarraysDivByK(nums, numsSize, k);
    //printf("Number of subarrays divisible by %d: %d\n", k, result);

    return 0;
}
