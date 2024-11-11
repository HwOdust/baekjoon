#include<stdio.h>
#define max(x,y) x>y ? x:y

int main()
{
    int n, num[10], max_num, s;

    for (int i=0; i<9; i++)
    {
        scanf("%d", &num[i]);

        if (i==0)
            max_num=num[i];
        
        else 
        {
           max_num = max(max_num, num[i]);
        }
    }

    for (int i=0; i<9; i++)
    {
       if(max_num==num[i])
        {
            s=i+1;
        }
    }

    printf("%d\n%d", max_num, s);
    
    return 0;
}