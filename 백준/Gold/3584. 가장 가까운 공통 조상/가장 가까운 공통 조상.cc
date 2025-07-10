#include<iostream>

using namespace std;
int reverse_list[10000]={0};
int length[10000]={0};

int set_length(int x)
{
    if(length[x]!=-1)return length[x]; //세이브가 있다면 리턴
    if(reverse_list[x]==0)return length[x]=1; //루트라면 1
    return length[x]=set_length(reverse_list[x])+1; //찾아서 +1후 리턴
}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int test_case;
    int n=0,a,b; //node cnt
    cin >> test_case;

    while(test_case--)
    {
        cin >> n;
        for(int i=1;i<=n;i++) //list reset
        {
            reverse_list[i]=0;
            length[i]=-1;
        }
        for(int i=0;i<n-1;i++) //reverse save
        {
            cin>>a>>b;
            reverse_list[b]=a;
        }
        for(int i=1;i<=n;i++)
        {
            if(length[i]!=-1)continue; //세이브가 됐다면 넘기기
            set_length(i);
        }
        cin>>a>>b;
        while(length[a]!=length[b])
        {
            if(length[a]<length[b])b=reverse_list[b];
            else a=reverse_list[a];
        }
        while(a!=b)
        {
            a=reverse_list[a];
            b=reverse_list[b];
        }
        cout<<a<<'\n';
    }
}