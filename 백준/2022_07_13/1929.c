#include <stdio.h>

int main(void)
{
    int a, b;
    int i, j;
    int result[1000001] = {0, };
    result[1] = 1;
    scanf("%d %d", &a, &b);
    for (i=2;i<=b;i++)
    {
        for (j=2;j*i<=b;j++)
        {
            result[j * i] = 1;
        }
    }
    for (i=a;i<=b;i++)
    {
        if (result[i] == 0)
            printf("%d\n", i);
    }
}
