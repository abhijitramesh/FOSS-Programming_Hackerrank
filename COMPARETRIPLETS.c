int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count)
{
    *result_count=2;
    int acount=0;
    int bcount=0;
    int *data=malloc(2 * sizeof(int));
    for(int i=0;i<a_count;++i)
    {
        if(*(a+i)>*(b+i))
            ++acount;
        else if(*(b+i)>*(a+i))
            ++bcount;
        else
            ;
    }
    *(data+0)=acount;
    *(data+1)=bcount;
    return data;
}
