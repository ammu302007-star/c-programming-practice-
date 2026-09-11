#include <stdio.h>

int main()
{
    int a[] = {10, 25, 7, 42, 18};
    int n = 5;
    int min = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Minimum = %d\n", min);

    return 0;
}
