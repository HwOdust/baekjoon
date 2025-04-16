#include<iostream>

using namespace std;

int main()
{
   int arr1[1001]={0},arr2[1001]={0};
    int n,cnt=0;

    cin>>n;

    for(int i=0;i<n;i++)cin>>arr1[i];
    for(int i=0;i<n;i++)cin>>arr2[i];

    for(int i=0;i<n;i++)
    {
        if(arr1[i]<=arr2[i])cnt++;
    }

    cout<<cnt;
    

    return 0;
}