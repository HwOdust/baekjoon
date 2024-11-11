#include <stdio.h>
#include<stdlib.h>
int is_prime[3000001] = { 0 };
int i, j;
int cnt = 1;
//0이면 소수
void era(int n)
{
    for (i = 2; i <= n; i++)
    {
        if (is_prime[i])continue;
        //cnt++; 
        for (j = 2; i * j <= n; j++)
        {
            //if (i * j > 500000)break;
            //printf("%d %d\n", i, j);
            is_prime[i * j] = 1;
        }
    }
}

int toast(int a)
{
    int c = 0;
    a -= 1;
    if (a == 4)
    {
        //printf("2 2\n");
        cnt += 2; 
        return 0;
    }
    for (int i = a / 2; i <= a; i++)
    {
        if (c == 1)return 0;
        if (is_prime[i] == 0 && is_prime[a - i]==0)
        {
            c = 1;
            //printf("%d %d\n", i, a - i);
            cnt += 2;
            toast(i);
            toast(a - i);
        }
    }
}


int main()
{
    is_prime[0] = 1;
    is_prime[1] = 1;

    int x;
    scanf("%d", &x);
    era(x);
    toast(x);
    printf("%d", cnt);
    
   


    return 0;
}