#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //정수=atoi(문자열), sprintf(문자열,"%d,정수)
#include <math.h>


int main()
{
    char n[1000001];
    int i, N,count=0,sum=10;

    scanf("%s", n);
  

    if (strlen(n) < 2) 
    {
        N = n[0] % 3;
        if (N == 0)printf("%d\nYES", count);
        else printf("%d\nNO", count);
        return 0;
    }
    while(strlen(n)>1)
    {
        sum = 0;
        count++;
        for (i = 0; i < strlen(n); i++)
        {
            sum += n[i] - '0';
        }
        sprintf(n, "%d", sum);
    }
    sum %= 3;
    if (sum == 0)printf("%d\nYES", count);
    else printf("%d\nNO", count);

    return 0;
}



