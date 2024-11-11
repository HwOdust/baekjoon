#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi



int main()
{
	char word[1000001];
	int arr[27] = { 0 };

	scanf("%s", word);

	int len = strlen(word);
    int i, j, max, save = 0, r = 0;

    for (i = 'a'; i <= 'z'; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (i == word[j])
                arr[i - 'a']++;
        }
    }
    for (i = 'A'; i <= 'Z'; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (i == word[j])
                arr[i - 'A']++;
        }
    }
	
    max = arr[0];
    for (i = 1; i < 26; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            save = i;
        }
    }

   
   
    for (i = 0; i < 26; i++)
    {
        if (max==arr[i])
            r++;
    }

   
    if (r > 1)
        printf("?");
    else
        printf("%c", save + 'A');
    
	return 0;
}

