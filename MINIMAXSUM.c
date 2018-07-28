void miniMaxSum(int arr_count, int* arr)
{
    int n=arr_count;
    for(int i=0;i<n-1;++i)
    {
        for(int j=i;j<=n-i-2;++j)
        {
            if(*(arr+j)>*(arr+j+1))
            {
                int tmp=*(arr+j+1);
                *(arr+j+1)=*(arr+j);
                *(arr+j)=tmp;
            }
        }
    }
    long long summax=0;long long summin=0;
    for(int i=0;i<n;++i)
    {

        if(i+3==n-1)
        {
         summax+=*(arr+i)+*(arr+i+1)+*(arr+i+2)+*(arr+i+3);
            break;
        }

    }
    summin+=*(arr+0)+*(arr+1)+*(arr+2)+*(arr+3);
    printf("%lld", summin);
    printf(" ");
    printf("%lld", summax);
}
