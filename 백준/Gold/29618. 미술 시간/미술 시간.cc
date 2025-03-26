#include<iostream>
#include<vector>
using namespace std;
int n, q, a, b, x, ti = 1;
int arr[100001] = { 0 }, visited[100001] = { 0 };

//텔포에도 이름을 붙여준다. 
//텔포 지점을 설정
//i도 설정....

int main()
{
	scanf("%d %d", &n, &q);

	for (int i = 1; i <= n; i++)
	{
		arr[i] = i + 1;
	}
	
	for (int i = 0; i < q; i++)
	{
		vector<int>save;
		scanf("%d %d %d", &a, &b, &x);
		int j = a,cnt=0;
		while (j <= b)
		{
			if(visited[j]==0)visited[j] = x;
			save.push_back(j);
			j = arr[j];
			cnt++;
		}
		//최적화
		for (int s = 0; s < cnt; s++)
		{
			arr[save[s]] = b+1;
		}
	}

	for (int i = 1; i <= n; i++)printf("%d ", visited[i]);
	
	return 0;
}

//색칠+텔포 구간에 번호 지정...
//어떻ㄱㅔ 활용하는 것??
//