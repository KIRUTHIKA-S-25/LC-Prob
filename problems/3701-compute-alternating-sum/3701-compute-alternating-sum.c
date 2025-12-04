int alternatingSum(int* nums, int numsSize) {
    int i,ans=0;
    for(i=0;i<numsSize;i++)
    {
        if(i%2==0)
        {
            ans+=nums[i];
        }
        else
        {
            ans-=nums[i];
        }
    }
   return ans;
}