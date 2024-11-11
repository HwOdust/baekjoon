#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi



int main()
{
	
    char words[5][16] = { 0, };
    for (int i = 0; i < 5; i++) {
        scanf("%s", words[i]);
    }

    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 5; j++)
        {
            if (words[j][i])
                printf("%c", words[j][i]);
        }
    }
	
	return 0;
}


