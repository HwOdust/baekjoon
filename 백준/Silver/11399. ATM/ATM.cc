#include<iostream>
using namespace std;
int real=0,arr[1001] = { 0 }, tmp = 0, s, i, j, sum = 0;;
void sort()
{
	int i, j;
	for (i = 0; i < s; i++)
	{
		for (j = i + 1; j < s; j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main()
{
	
	scanf("%d", &s);
	for (i = 0; i < s; i++)scanf("%d", &arr[i]);
	sort();
	for (i = 0; i < s; i++)
	{
		sum += arr[i];
		real += sum;
	}
	printf("%d", real);
	return 0;
}