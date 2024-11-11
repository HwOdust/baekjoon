#include<stdio.h>
int main()
    {
    char n[2]={0};
    scanf("%c",&n[0]);
    if(n[0]=='n' || n[0]=='N')printf("Naver D2");
    else printf("Naver Whale");
    
    return 0;
}