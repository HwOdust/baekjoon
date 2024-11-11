#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    
    int list[200001] = { 0, }, n, a, b, cnt = 0, max = 0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) 
    {
        scanf("%d %d", &a, &b);
       
        if (a > max)max = a;
        if (b == 1) list[a]++;
        else if (b == 0) list[a]--;
        
        if (list[a] < 0) {
            list[a]++;
            cnt++;
        }
        else if (list[a] > 1) {
            list[a]--;
            cnt++;
        }
        
    }
    for (int i = 1; i <= max; i++) {
        if (list[i] != 0) cnt++;
    }
    
    printf("%d", cnt);
    return 0;
}
