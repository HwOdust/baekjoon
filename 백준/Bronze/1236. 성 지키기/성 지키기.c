#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //정수=atoi(문자열), sprintf(문자열,"%d,정수)
#include <math.h>


int main()
{
    int i, j, a, b, H = 0, m,left=0,right=0;
    char N[51][51];
    scanf("%d %d", &a, &b);

    for (i = 0; i < a; i++)
    {
        scanf("%s", N[i]);
    }

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (N[i][j] != 'X')H++;

        }
        if (H == b)left++;
        H = 0;
    }
    for (i = 0; i < b; i++) //3 5 
    {
        for (j = 0; j < a; j++)
        {
            if (N[j][i] != 'X')H++;
        }
        if (H == a)right++;
        H = 0;
    }

    
    if (left == right)printf("%d", right);
    else if (left > right)printf("%d", left);
    else printf("%d", right);
    

    return 0;
}



