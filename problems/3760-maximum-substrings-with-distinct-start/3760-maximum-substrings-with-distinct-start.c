int maxDistinct(char* s) {
 int n=strlen(s);
 int i,j,count=0;
 int freq[26] = {0};
 for(i=0;i<=n-1;i++)
 {
    int idx=s[i]-'a';
        if(freq[idx]==0){
            freq[idx]=1;
            count++;
        }
 }
 return count;
}