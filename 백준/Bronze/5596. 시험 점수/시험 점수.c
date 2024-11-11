#include<stdio.h>
int main()
{
    int sum=0,sum2=0,i=0,n;
    for(i=0;i<8;i++)
     {
        scanf("%d",&n);
        if(i<4)sum+=n;
        else sum2+=n;
     }
    if(sum>sum2)printf("%d",sum);
    else printf("%d",sum2);
    return 0;
}