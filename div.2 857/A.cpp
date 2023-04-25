#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		int r_cnt = 0;
		int cnt = 0;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			int a;
			cin >> a;
			if (a < 0)
				r_cnt++;
			else
				cnt++;
		}
		for (int j = 1; j <= cnt; j++)
			cout << j << " ";
		for (int j = 1; j <= r_cnt; j++)
			cout << cnt - j << " ";
		cout << endl;

		for (int j = 0; j < r_cnt; j++)
			cout << "1 0 ";
		for (int j = 1; j <= cnt - r_cnt; j++)
			cout << j << " ";
		cout << endl;
	}
}