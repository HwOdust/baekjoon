#include<stdio.h>
int main(){
	long long n, t, p, rank[50] = { 0 },c=0,h=0;
	scanf("%lld %lld %lld", &n, &t, &p);
	for (int i = 0; i < n; i++){
		scanf("%lld", &rank[i]);
		if (rank[i] > t)c++;
		else if(rank[i]==t) h++;
	}
	if (c + h == p)printf("-1");
	else printf("%lld", c+ 1);
	return 0;}