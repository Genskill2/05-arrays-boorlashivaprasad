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


int min(int b[], int n)
{
    int solu = b[0];
    for (int i = 1; i < n; i++)
    {
        if (b[i] < solu)
            solu = b[i];
    }
    return solu;
}


float average(int c[], int n)
{
    int solut = 0;
    for (int i = 0; i < n; i++)
        solut += c[i];
    return solut / (float)n;

}


int mode(int d[], int n)
{
    int maxi = d[0];
    for (int i = 1; i < n; i++)
    {
        if (d[i] > maxi)
            maxi = d[i];
    }
    int array[maxi + 1];
    for (int i = 0; i <= maxi; i++)
        array[i] = 0;

    for (int i = 0; i < n; i++)
        array[d[i]]++;

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
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int sol = max(a, 7);
    printf("%d\n",sol);
    
    
    int b[] = {1, 2, 3, 4, 5, 6, 7};
    int solu = min(b, 7);
    printf("%d\n",solu);
    
    
    int c[] = {1, 2, 3, 4, 5, 6, 7, 8};
    float solut = average(c, 7);
    printf("%f\n", solut);
    
    
    
    int d[] = {5, 6, 7, 7, 6, 6, 6, 4, 3};
    int soluti = mode(d, 9);
    printf("Mode is : %d\n", soluti);
    
    
    int arr[100];
    int cnt = factors(2250, arr);
    for (int i = 0; i < cnt; i++)
    {
        printf("%d \n ", arr[i]);
    }

    printf("factors are : %d\n", cnt);
    
}
