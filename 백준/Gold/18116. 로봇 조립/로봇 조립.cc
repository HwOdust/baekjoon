#include<iostream>


using namespace std;
int arr[1000001] = { 0 }, save = 0, cnt[1000001] = { 0 },n;

int find(int a) //dfs
{
	//int leader;
	if (arr[a] == a) //찾음
	{
		return a;
	}
	else //리더아닐때
	{
		return arr[a] = find(arr[a]);
		//동시에 최적화 및... cnt,,,어케함
	}
}


void younion(int a,int b) //묶기
{
	int a2;
	int b2;
	if (find(a) == find(b))return; //이미 유니온이면
	a2 = find(a); //대빵찾기
	b2 = find(b); //대빵찾기
	if (a2 > b2) //b2
	{
		cnt[b2] += cnt[a2];
		arr[a2] = b2;
	}
	else //a2
	{
		cnt[a2] += cnt[b2];
		arr[b2] = a2;
	}
	//cout << find(a) << " " << find(b) << " " << arr[find(a)] << " " << arr[find(b)] << " " << cnt[find(a)] << " " << cnt[find(b)] << "\n";
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int a,b;
	char x[2] = { 0 };
	cin >> n;

	for (int i = 1; i <= 1000000; i++)
	{
		arr[i] = i; //빈칸채우기
		cnt[i] = 1; //빈칸채우기
	}

	for (int i = 0; i < n; i++) //이게... 입력
	{
		cin >> x;
		if (x[0] == 'I')
		{
			cin >> a >> b;
			younion(a, b);
		}
		else //몇 개인지 확인
		{
			cin >> a;
			cout << cnt[find(a)] << "\n";
		}
	}

	//for (int i = 1; i <= n; i++)cout << cnt[i] << " ";
	return 0;
}

