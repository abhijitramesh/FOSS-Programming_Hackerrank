int diagonalDifference(int arr_rows, int arr_columns, int** arr)
{
    int sum1=0;
    int sum2=0;
    for(int i=0;i<arr_rows;++i)
    {
        for(int j=0;j<arr_columns;++j)
        {
            if(i==j)
            {
                if(arr[i][j]>=-100 && arr[i][j]<=100)
                sum1+=arr[i][i];
            }

        }
    }
    int j=arr_columns-1;
    for(int i=0;i<arr_rows;++i)
    {

            if(arr[i][j]>=-100 && arr[i][j]<=100)
                sum2+=arr[i][j];
          --j;

      }


    return abs(sum1-sum2);

}
