#include<iostream>
#include<string>
#include<queue>

using namespace std;
priority_queue<int>pq;

//pq.top() 우선순위 가장 높은 놈 반환
//pq.pop() 루프 노드 팝
//pq.size()
//pq.empty()
//pq.push()

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n,x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x == 0 && pq.size() == 0)cout << "0\n";
		else if (x == 0)
		{
			cout << pq.top() << "\n";
			if(pq.empty()==0)pq.pop();
		}
		else
		{
			pq.push(x);
		}
	}
	return 0;
}