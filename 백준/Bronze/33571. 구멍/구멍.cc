#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char arr[1001]={0};
    cin.getline(arr,1001);
    int len=strlen(arr),cnt=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i]=='a'||arr[i]=='A'||arr[i]=='b'||arr[i]=='D'||arr[i]=='d'||arr[i]=='e'||arr[i]=='g'||arr[i]=='O'||arr[i]=='o'||arr[i]=='P'||arr[i]=='p'||arr[i]=='Q'||arr[i]=='q'||arr[i]=='R'||arr[i]=='@')
            cnt++;
        if(arr[i]=='B')cnt+=2;
    }
    cout<<cnt;
    return 0;
}
