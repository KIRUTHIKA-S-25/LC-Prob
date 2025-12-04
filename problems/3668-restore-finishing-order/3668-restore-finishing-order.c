/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* recoverOrder(int* order, int orderSize, int* friends, int friendsSize, int* returnSize) {
    int* ans=(int*)malloc(friendsSize*sizeof(int*));
    int i,j,count=0;
    for(i=0;i<orderSize;i++)
    {
     for(j=0;j<friendsSize;j++)
     {
      if(order[i]==friends[j])
      {
        ans[count++]=order[i];
      }
      }
    }
    *returnSize=count;
    return ans;
}