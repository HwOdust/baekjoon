#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //정수=atoi(문자열), sprintf(문자열,"%d,정수)
#include <math.h>


int main()
{
    int i,left=0,right=0;
    char P[1001];
    scanf("%s", P);

    for (i = 0; i < strlen(P); i++)
    {
        if (P[i] == '@')left++;
        if (P[i] == ')')break;
    }
    for (i = i; i < strlen(P); i++)
    {
        if (P[i] == '@')right++;
    }

    printf("%d %d", left, right);

    return 0;
}



