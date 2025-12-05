int finalValueAfterOperations(char** operations, int operationsSize) {
    int i, x=0;
    for(i=0;i<operationsSize;i++)
    {
        if(operations[i][1]=='+')
        {
            x++;
        }
        if(operations[i][1]=='-')
        {
            x--;
        }
    }
    return x;
}