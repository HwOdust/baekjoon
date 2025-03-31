#include<iostream>


using namespace std;
int arr[5001] = { 0 };
int main()
{
	int n, k, m, kill = 0, semikill = 0, cnt = 1;
	int index = 0;
	int direction = 2;//2==right, 1==left

	cin >> n >> k >> m;

	for (int i = 1; i <= n; i++)
	{
		arr[i] = 1; 
	}

	while (kill != n)
	{
		if (cnt == k&&arr[index]==1) //죽이기
		{
			semikill++;
			kill++;
			arr[index] = 0;
			cnt = 1;
			cout << index << "\n";
		}
		else if(arr[index]==1) //살아있으면
		{
			cnt++;
		}

		if (semikill == m)
		{
			if (direction == 1)direction = 2;
			else direction = 1;
			semikill = 0;
		}

		if (direction == 2)index++;
		else index--;

		if (index > n && direction == 2)index = 1;
		else if (index < 1 && direction == 1)index = n;
	}

	//semikill이 m이 되면 방향 바꾸고 카운트 초기화

	return 0;
}

