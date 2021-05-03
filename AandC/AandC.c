#include <stdio.h>
#include "AandC.h"
int array(int m, int n)
{
    int ans = 1;
    for (int i = 0; i < m; i++)
        ans *= n - i;
    return ans;
}

int combinnate(int m, int n)
{
    return array(m, n) / array(m, m);
}