// https://www.hackerrank.com/challenges/printing-pattern-2/problem

#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j, k, c = 0;
    scanf("%d", &n);
    int a[2 * n];
    k = n;
    for (i = 0; i < (2 * n - 1); i++)
    {
        a[i] = n;
    }

    for (i = 0; i < (2 * n - 1); i++)
    {
        if (i < n)
        {
            for (j = c; j < (2 * n - 1) - c; j++)
            {
                a[j] = n - c;
            }
            c++;
        }
        else if (i > n - 1)
        {
            for (j = c - 1; j < (2 * n - 1) - c + 1; j++)
            {
                a[j] = n - c + 2;
            }
            c--;
        }

        for (j = 0; j < (2 * n - 1); j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }

    return 0;
}
