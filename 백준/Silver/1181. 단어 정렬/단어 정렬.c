#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <malloc.h>

char tmp[20000][51] = { 0 };
char arr[20000][51] = { 0 };

void merge(int left, int right) //shit...
{
    int mid=(right + left) / 2;
    int lp = left, rp = mid + 1, k = left;

    while (lp <= mid && rp <= right)
    {
        if(strlen(arr[lp])<strlen(arr[rp]))strcpy(tmp[k++], arr[lp++]);
        else if(strlen(arr[lp]) > strlen(arr[rp]))strcpy(tmp[k++], arr[rp++]);
        else if (strcmp(arr[lp], arr[rp])<0)
        {
            strcpy(tmp[k++],arr[lp++]);
        }
        else
        {
            strcpy(tmp[k++], arr[rp++]);
           // tmp[k++] = arr[rp++];
        }
    }
    while (lp <= mid)
    {
        strcpy(tmp[k++], arr[lp++]);
    }
    while (rp <= right)
    {
        strcpy(tmp[k++], arr[rp++]);
    }
    for (int i = left; i <= right; i++)strcpy(arr[i],tmp[i]);
}

void partition(int left, int right) 
{
    if (left >= right) return;
    int mid = (left + right) / 2;
    partition(left, mid);
    partition(mid + 1, right);
    merge(left, right);
}

int main()
{    
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &arr[i]);
    }

    partition(0, n-1);
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            if (!strcmp(arr[i], arr[check]))
            {
                continue;
            }
        }
        check = i;
        printf("%s\n", arr[i]);
    }
    return 0;
}