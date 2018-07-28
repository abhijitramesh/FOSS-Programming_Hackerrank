int birthdayCakeCandles(int ar_count, int* ar)
{
    int c=0;
    if(ar_count<=100000)
    {
          int n=ar_count;
          int tmp=ar[0];
          for(int i=0;i<n;++i)
          {
              if(ar[i]>tmp)
                  tmp=ar[i];
          }
        for(int i=0;i<n;++i)
        {
            if(ar[i]==tmp)
                ++c;
        }

    }
    return c;
}
 
