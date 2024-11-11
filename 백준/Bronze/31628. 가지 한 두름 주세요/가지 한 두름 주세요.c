#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //정수=atoi(문자열), sprintf(문자열,"%d,정수)
#include <math.h>


int main()
{
    char G[11][11][9];
    int i,j, c = 0,s=0;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            scanf("%s",G[i][j]);
        }
        
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (strcmp(G[i][j],G[i][j + 1])==0)c++;
        }
        if (c == 9)s++;
        c = 0;
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (strcmp(G[j][i], G[j+1][i])==0)c++;
        }
        if (c == 9)s++;
        c = 0;
    }

    if (s>0)printf("1");
    else printf("0");

    return 0;
}



