/* Enter your solutions in this file */
#include <stdio.h>
int max(int a[], int n)
{
    int sol = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > sol)
            sol = a[i];
    }
    return sol;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int sol = max(a, 7);
    printf("%d\n",sol);
}
