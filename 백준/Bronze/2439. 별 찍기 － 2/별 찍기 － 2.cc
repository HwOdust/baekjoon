#include <stdio.h>
int main() 
{
    int N = 0;
    scanf("%d", &N); //5

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N - i-1; j++) 

        {
            printf(" ");
        }

        for (int a = 0; a < i + 1; a++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

