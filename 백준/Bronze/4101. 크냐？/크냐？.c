#include<stdio.h>
#include<string.h>

int main()
{
    int a, b;
    while (1)
    {
        scanf("%d %d", &a, &b);
        if (a == b &&b== 0)return 0;
        if (a > b)printf("Yes\n");
        else printf("No\n");
    }

}