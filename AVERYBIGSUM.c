long aVeryBigSum(int ar_count, long* ar)
{
    if(ar_count>=1 && ar_count<=10)
    {
        long long sum=0;
        for(int i=0;i<ar_count;++i)
        {
            if(ar[i]>=0 && ar[i]<=pow(10,10))
                sum+=*(ar+i);
        }
        return sum;
    }
    else
        return 1;


}
