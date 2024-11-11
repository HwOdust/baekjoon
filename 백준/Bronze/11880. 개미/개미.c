#include<stdio.h>

int main()
{
    int n;
    long long int a, b, c;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%lld %lld %lld", &a, &b, &c);
        if (a >= b && a >= c)printf("%lld\n", a * a + (b + c) * (b + c));
        else if (b >= a && b >= c)printf("%lld\n", b * b + (a + c) * (a + c));
        else if (c >= a && c >= b)printf("%lld\n", c * c + (a + b) * (a + b));
    }
    return 0;
}
