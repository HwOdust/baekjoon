#include<iostream>

using namespace std;

int arr[10000000] = { 0 };


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
	int head = 5000000, tail = 5000001, size = 0, k,a,x;

	cin >> k;

	for (int i = 0; i < k; i++)
	{
		cin >> a;
		if (a == 1)
		{
			cin >> x;
			arr[head] = x;
			head--;
			size++;
		}
		else if (a == 2)
		{
			cin >> x;
			arr[tail] = x;
			tail++;
			size++;
		}
		else if (a == 3)
		{
			if (size == 0)cout << -1 << "\n";
			else
			{
				cout << arr[head + 1] << "\n";
				head++;
				size--;
			}
		}
		else if (a == 4)
		{
			if (size == 0)cout << -1 << "\n";
			else
			{
				cout << arr[tail - 1] << "\n";
				tail--;
				size--;
			}
		}
		else if (a == 5)
		{
			cout << size << "\n";
		}
		else if (a == 6)
		{
			if (size == 0)cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (a == 7)
		{
			if (size == 0)cout << -1 << "\n";
			else cout << arr[head + 1] << "\n";
		}
		else
		{
			if (size == 0)cout << -1 << "\n";
			else cout << arr[tail - 1] << "\n";
		}
	}


	return 0;
}