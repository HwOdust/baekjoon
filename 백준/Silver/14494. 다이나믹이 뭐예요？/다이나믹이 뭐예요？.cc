#include<iostream>
using namespace std;

long long map[1001][1001]={0};

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int a,b;
    long long mod = 1000000007;
    cin>>a>>b;
    for(int i=1;i<=a;i++)map[i][1]=1;
    for(int i=1;i<=b;i++)map[1][i]=1;

    for(int i=2;i<=a;i++) //행
    {
        for(int j=2;j<=b;j++) //열
        {
            map[i][j]=(map[i-1][j]%mod+map[i][j-1]%mod+map[i-1][j-1]%mod)%mod;
            //3개 한 번에 더하다가 롱롱 초과하는 거 방지
        }
    }
    cout<<map[a][b]%mod;
    return 0;
}