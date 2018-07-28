void plusMinus(int arr_count, int* arr)
{
    if(arr_count>0 && arr_count<=100)
    {
        float positive=0.0;float negetive=0.0; float zeros=0.0;
    for(int i=0;i<arr_count;++i)
    {
        if(*(arr+i)>0 && *(arr+i)<=100)
            ++positive;
        else if(*(arr+i)<0 && *(arr+i)>=-100)
            ++negetive;
        else
            ++zeros;
    }
         printf("%.6f\n", (positive/(arr_count*1.0)));
    printf("%.6f\n", (negetive/(arr_count*1.0)));
    printf("%.6f\n", (zeros/(arr_count*1.0)));

    }



}
