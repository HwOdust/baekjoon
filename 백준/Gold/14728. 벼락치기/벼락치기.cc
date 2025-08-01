#include<iostream>
using namespace std;

int main()
{
    int n,t,d,p;
    int dp[10001]={0};
    cin>>n>>t;
    for(int i=0;i<n;i++)
    {
        cin>>d>>p;
        for(int j=t;j-d>=0;j--)
        {
            dp[j]=max(dp[j],dp[j-d]+p);
        }
    }
    cout<<dp[t];
    return 0;
}