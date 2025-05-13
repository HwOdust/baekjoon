#include<iostream>
#include<cmath>

using namespace std;

int n,r,c;
int output;

int divide(int x, int y,int Add,int num)
{
    int N=Add*Add;
    if(x==r&&y==c)
    {
        output = num;
        return 0;
    }

    if(r<x+Add&&c<y+Add)
    {
        divide(x,y,Add/2,num);
    }
    else if(r<x+Add&&c>=y+Add)
    {
        divide(x,y+Add,Add/2,num+N);
    }
    else if(r>=x+Add&&c<y+Add)
    {
        divide(x+Add,y,Add/2,num+2*N);
    }
    else if(r>=x+Add&&c>=y+Add)
    {
        divide(x+Add,y+Add,Add/2,num+3*N);
    }

    return 0;
}

int main()
{
    cin>>n>>r>>c;

    int number=0;

    int save=pow(2,n);

    divide(0,0,save,number);

    cout<<output;

    return 0;
}