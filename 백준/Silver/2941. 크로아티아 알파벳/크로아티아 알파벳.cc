#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char line[101] = { 0 };
	int cnt = 0;

	cin.getline(line,101);
	
	int len = strlen(line);
	for (int i = 0; i < len; i++)
	{
		if(i+1<len) //2글자
		{
			if (line[i] == 'c' && line[i + 1] == '=')
			{
				cnt++;
				i++;
				continue;
			}
			else if (line[i] == 'c' && line[i + 1] == '-')
			{
				cnt++;
				i++;
				continue;
			}
			else if (line[i] == 'd' && line[i + 1] == '-')
			{
				cnt++;
				i++;
				continue;
			}
			else if (line[i] == 'l' && line[i + 1] == 'j')
			{
				cnt++;
				i++;
				continue;
			}
			else if (line[i] == 'n' && line[i+1] == 'j')
			{
				cnt++;
				i++;
				continue;
			}
			else if (line[i] == 's' && line[i + 1] == '=')
			{
				cnt++;
				i++;
				continue;
			}
			else if (line[i] == 'z' && line[i + 1] == '=')
			{
				cnt++;
				i++;
				continue;
			}
		}
		if (i + 2 < len) //3글자
		{
			if (line[i] == 'd' && line[i + 1] == 'z' && line[i + 2] == '=')
			{
				cnt++;
				i += 2;
				continue;
			}
		}
		cnt++;
	}
	cout << cnt;
	return 0;
}

