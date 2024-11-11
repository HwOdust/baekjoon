#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>



int main()
{
	
	char arr[5] = { 0 };
	int len;
	int i;
	int c;
	

	while (1)
	{
		scanf("%s", &arr);
		len = strlen(arr);
		

		if (strcmp(arr, "0") == 0) break;

		c = 0;
	

		for (i = 0; i < len / 2; i++)
		{
			if (arr[i] == arr[len - i - 1])
			{
				
				c++;
			}

			else 
			{
				printf("no\n");
				break;
			}			
		}

		if (c == len / 2)
			printf("yes\n");

		
		
	}
	return 0;
}


