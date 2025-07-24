#include<iostream>
#include<cstring>
using namespace std;

int dp[10001]={0},coin[100]={0};
int n,k;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>coin[i];

    for(int i=0;i<k;i++)
    {
        if(i!=0&&dp[i]==0)continue;
        for(int j=0;j<n;j++)
        {

            if(i+coin[j]>k)continue;
            if(dp[i+coin[j]]>dp[i]+1)dp[i+coin[j]]=dp[i]+1;
            if(dp[i+coin[j]]==0)dp[i+coin[j]]=dp[i]+1;
        }

    }
    if(dp[k]==0)cout<<-1;
    else cout<<dp[k];
    return 0;
}

//6원으로 7
