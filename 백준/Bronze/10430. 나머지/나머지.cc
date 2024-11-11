#include<stdio.h>
int main()

{
	int a, b, c, s1, s2, s3, s4;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	s1 = (a + b) % c;
	s2 = ((a % c) + (b % c)) % c;
	s3 = (a * b) % c;
	s4 = ((a % c) * (b % c)) % c;

	printf("%d\n", s1);
	printf("%d\n", s2);
	printf("%d\n", s3);
	printf("%d\n", s4);

	return 0;

}