int minimumOperations(int* nums, int numsSize) {
    int i,r,count=0;
    for(i=0;i<numsSize;i++)
    {
        r=nums[i]%3;
        if(r==1)
        {
            count++;
        }
        else if(r==2)
        {
            count++;
        }
    }
    return count;
}