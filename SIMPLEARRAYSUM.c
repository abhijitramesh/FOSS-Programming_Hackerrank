#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

/*
 * Complete the simpleArraySum function below.
 */
int simpleArraySum(int ar_count, int* ar)
{
    int sum=0;
    if(ar_count<1)
        return 1;
    else
    {
        for(int i=0;i<ar_count;++i)
        {
            if(ar[i]<=1000)
                sum+=ar[i];
            else
                continue;
        }
        return sum;

    }
}


