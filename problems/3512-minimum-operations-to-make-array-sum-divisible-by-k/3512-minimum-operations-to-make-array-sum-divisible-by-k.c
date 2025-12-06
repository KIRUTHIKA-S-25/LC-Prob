int minOperations(int* nums, int numsSize, int k) {
    int i,sum=0,r;
    for(i=0;i<numsSize;i++)
    {
      sum=sum+nums[i];
    }
    if(sum%k==0)
    {
        return 0;
    }
    else
    {
       r=sum%k;
       return r;
    }
}