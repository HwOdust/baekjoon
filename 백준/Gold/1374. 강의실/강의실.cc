#include<iostream>
#include<string>
#include<queue>
#include<vector>

using namespace std;
priority_queue<int,vector<int>,greater<int>>start; //최소힙
priority_queue<int, vector<int>, greater<int>>endd;

//pq.top() 우선순위 가장 높은 놈 반환
//pq.pop() 루프 노드 팝
//pq.size()
//pq.empty()
//pq.push()

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, x, y,m=0,z;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> z >> x >> y;

		start.push(x);
		endd.push(y);
	}

	while(!start.empty())
	{
		if (start.top() >= endd.top())//시작하는 게 더 느리면
		{
			endd.pop();
			cnt--;
		}
		else if (start.top() < endd.top())//끝나는 게 더 느리면
		{
			start.pop();
			cnt++;
			m = max(m,cnt);
		}
	}
	cout << m;
	return 0;
}

//4
//2 3
//1 10
//13 15
//5 20