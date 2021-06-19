/* Enter your solutions in this file */
#include <stdio.h>
#include <math.h>
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






int min(int a[], int n)
{
    int sol = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < sol)
            sol = a[i];
    }
    return sol;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int sol = min(a, 7);
    printf("%d\n",sol);
}






float average(int a[], int n)
{
    int sol = 0;
    for (int i = 0; i < n; i++)
        sol += a[i];
    return sol / (float)n;

}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    float sol = average(a, 7);
    printf("%f\n", sol);
}





int mode(int a[], int n)
{
    int maxi = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > maxi)
            maxi = a[i];
    }
    int array[maxi + 1];
    for (int i = 0; i <= maxi; i++)
        array[i] = 0;

    for (int i = 0; i < n; i++)
        array[a[i]]++;

    int final = 0;
    int ans = 0;
    for (int i = 0; i <= maxi; i++)
    {
        if (array[i] > final)
        {
            ans = i;
            final = array[i];
        }
    }
    return ans;
}

int main()
    {
    int a[] = {5, 6, 7, 7, 6, 6, 6, 4, 3};
    int sol = mode(a, 9);
    printf("Mode is : %d\n", sol);
}






int factors(int n, int *arr)
{
    int count = 0;
    while (n % 2 == 0)
    {
        arr[count] = 2;
        count += 1;
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            arr[count] = i;
            count += 1;

            n = n / i;
        }
    }
    if (n > 2)
    {
        arr[count] = n;
        count += 1;
    }
    return count;
}
int main()
{
    int arr[100];
    int cnt = factors(2250, arr);
    for (int i = 0; i < cnt; i++)
    {
        printf("%d \n ", arr[i]);
    }

    printf("factors are : %d\n", cnt);
}
