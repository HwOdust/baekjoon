#include<iostream>
using namespace std;

int dp[1000001]={0},x;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    cin>>x;
    int i=x;
    while(i!=1)
    {
        if(i%3==0&&i>=3&&(dp[i]!=0||x==i))
        {
            if(x==i)dp[i/3]=dp[i]+1;
            else if((dp[i/3]>dp[i]+1)||dp[i/3]==0)dp[i/3]=dp[i]+1;
        }
        if(i%2==0&&i>=2&&(dp[i]!=0||x==i))
        {
            if(x==i)dp[i/2]=dp[i]+1;
            else if((dp[i/2]>dp[i]+1)||dp[i/2]==0)dp[i/2]=dp[i]+1;
        }
        if(i>1&&(dp[i]!=0||x==i))
        {
            if(x==i)dp[i-1]=dp[i]+1;
            else if((dp[i-1]>dp[i]+1)||dp[i-1]==0)dp[i-1]=dp[i]+1;
        }
        i--;
    }   
    cout<<dp[1];
    return 0;
}
