int scoreOfString(char* s) {
    int len,i=0,r[100],sum=0;
    len=strlen(s);
    while(i<len-1)
    {
      r[i]=abs(s[i]-s[i+1]);
      i++;
    }
    for(i=0;i<len-1;i++)
    {
        sum+=r[i];
    }
    return sum;
}