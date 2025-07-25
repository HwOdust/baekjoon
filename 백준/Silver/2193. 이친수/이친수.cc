#include<iostream>
using namespace std;
long long dp[91]={0},n,i=3;
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    cin>>n;
    dp[1]=dp[2]=1;
    while(i<=n)dp[i++]=dp[i-1]+dp[i-2];
    cout<<dp[n];
    return 0;
}
