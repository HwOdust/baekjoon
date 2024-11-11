#include<stdio.h>
#define max(x,y) x>y ? x:y
#define min(x,y) x<y ? x:y

int main()
{
    int n, num, max_num, min_num;
    scanf("%d", &n);

    for (int i=0; i<n; i++)
    {
        scanf("%d", &num);

        if(i==0)
        {
            max_num = num;
            min_num = num;
        }

        else
        {
            max_num = max(num,max_num);
            min_num = min(num,min_num);
        }
        
    }
    
    printf("%d %d", min_num, max_num);

    return 0;
}