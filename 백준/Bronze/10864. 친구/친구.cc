#include<iostream>

using namespace std;

int main()
{
    int arr[1001]={0};
    int n,m,x,y;
    cin >>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        arr[x]++;
        arr[y]++;
    }

    for(int i=1;i<=n;i++)cout<<arr[i]<<"\n";

    return 0;
}