#include<stdio.h>
int main()
{
    int i = 4, s, sum = 0;
    while (i--)
    {
        scanf("%d", &s);
        sum += s;
    }
    printf("%d\n%d", sum / 60, sum % 60);
    return 0;
}
