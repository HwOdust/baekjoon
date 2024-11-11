#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //정수=atoi(문자열), sprintf(문자열,"%d,정수)
#include <math.h>


int main()
{
    char A[31], B[31], T[31][31];
    int i, j, save_a = 0,save_b=0,found=0;
    scanf("%s", A);
    scanf("%s", B);

    for (i = 0; i < strlen(A); i++) //1,4 열 행
    {
        for (j = 0; j < strlen(B); j++)
        {
            if (A[i] == B[j])
            {
                save_a = i;
                save_b = j;
                found = 1;
                break;
            }
        }
        if (found == 1)break;
    }
    for (i = 0; i < strlen(B); i++)
    {
        for (j = 0; j < strlen(A); j++)
        {
            T[i][j] = '.';
        }
    }



    for (i = 0; i < strlen(B); i++)
    {
         if (i == save_b)
         {
             for (j = 0; j < strlen(A); j++)
             {
                 T[i][j] = A[j];
             }
         }
    }
    for (i = 0; i < strlen(A); i++)
    {
        if (i == save_a)
        {
            for (j = 0; j < strlen(B); j++)
            {
                T[j][i] = B[j];
            }
        }
    }
    for (i = 0; i < strlen(B); i++)
    {
        for (j = 0; j < strlen(A); j++)
        {
            printf("%c", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}



