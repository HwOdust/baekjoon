#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //정수=atoi(문자열), sprintf(문자열,"%d,정수)
#include <math.h>


int main()
{
    char n[6] = { 0 };
    int i,sum=0;
    gets(n);

    for (i = 0; i < strlen(n); i++)
    {
        sum += pow(n[i]-'0', 5);
    }
    printf("%d", sum);

    return 0;
}



