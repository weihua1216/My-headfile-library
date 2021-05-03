#include<stdio.h>
#include"arrayCount2.h"
int *arraycount2(int **nums, int i, int j, int pattern)
{
    if (pattern == 0)
        return max(nums, i, j);
    else if (pattern == 1)
        return min(nums, i, j);
}

int *max(int **num, int i, int j)
{
    int dat[i * j][2], t = 0, record[2] = {0};
    for (int m = 0; m < i; m++)
        for (int n = 0; n < j; n++)
            dat[i][j] = 0;
    for (int m = 0; m < i; m++)
        for (int n = 0; n < j; n++)
            for (int k = 0; k <= t; k++)
            {
                if (num[m][n] == dat[k][0])
                {
                    dat[k][1]++;
                    break;
                }
                if (num[m][n] != dat[k][0] && k == t)
                {
                    t++;
                    dat[t][0] = num[m][n];
                    break;
                }
            }
    for (int k = 0; k <= t; k++)
        if (dat[k][1] > record[1])
        {
            record[0] = dat[k][0];
            record[1] = dat[k][1];
        }
    return record;
}

int *min(int **num, int i, int j)
{
    int dat[i * j][2], t = 0, record[2] = {0, i * j + 1};
    for (int m = 0; m < i; m++)
        for (int n = 0; n < j; n++)
            dat[i][j] = 0;
    for (int m = 0; m < i; m++)
        for (int n = 0; n < j; n++)
            for (int k = 0; k <= t; k++)
            {
                if (num[m][n] == dat[k][0])
                {
                    dat[k][1]++;
                    break;
                }
                if (num[m][n] != dat[k][0] && k == t)
                {
                    t++;
                    dat[t][0] = num[m][n];
                    break;
                }
            }
    for (int k = 0; k <= t; k++)
        if (dat[k][1] < record[1])
        {
            record[0] = dat[k][0];
            record[1] = dat[k][1];
        }
}