#include<stdio.h>
int main(){
	long long int n, s, tri[100] = { 1,1,1,2,2 };
	scanf("%lld", &n);
	for (int i = 0; i < n; i++){
		scanf("%lld", &s);
		if (tri[s - 1] == 0){
			for (int j = 5; j < s; j++)tri[j] = tri[j - 1] + tri[j - 5];}
		printf("%lld\n", tri[s - 1]);}
	return 0;}