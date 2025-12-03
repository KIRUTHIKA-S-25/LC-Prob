/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int * ans=(int*)malloc(wordsSize*sizeof(int*));
    int i,count=0;
    for(i=0;i<wordsSize;i++)
    {
        if((strchr(words[i],x)!=NULL))
        {
            ans[count++]=i;
        }
    }
    *returnSize=count;
    return ans;
}