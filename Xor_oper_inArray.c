int xorOperation(int n, int start) {
    int xor=start;
    int *nums=(int*)malloc(n*sizeof(int));
    for(int i=1;i<n;i++){
        nums[i]=start+(2*i);
        xor^=nums[i];
    }
    return xor;
}
