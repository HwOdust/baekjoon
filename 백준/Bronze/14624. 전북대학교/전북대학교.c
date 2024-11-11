#include<stdio.h>
#include<string.h>

int main() 
{
    int n,i;
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("I LOVE CBNU");
        return 0;
    }
    
    for (i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
    for (i = 0; i < n / 2 + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n / 2 + i || j == n / 2 - i)
            {
                printf("*");
                continue;
            }
            if (j < n / 2 + i)printf(" ");

        }
        printf("\n");
    }

    return 0;
}
//2n+-i