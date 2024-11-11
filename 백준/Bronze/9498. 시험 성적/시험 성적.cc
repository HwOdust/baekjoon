#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);

	if (100 >= a && a >= 90) {
		printf("A");
	}

	else if (89 >= a && a >= 80) {
		printf("B");
	}

	else if (79 >= a && a >= 70) {
		printf("C");
	}

	else if (69 >= a && a >= 60) {
		printf("D");
	}

	else if (59 >= a && a>= 0) {
		printf("F");
	}

	return 0;

}