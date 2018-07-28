void staircase(int n)
{
    if(n>0 && n<=100)
    {
        int c=1;
    for(int i=1;i<=n;++i)
    {
        for(int j=n;j>=1;--j)
        {
            if(j>c)
            {
                printf(" ");
            }
            else
            printf("#");

        }
        ++c;
        printf("\n");

    }
}
}
