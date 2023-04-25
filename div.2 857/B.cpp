#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		int detect = 0;
		int no = 0;
		int use = 0;
		int free = 0;
		for (int j = 0; j < n; j++)
		{
			int a;
			cin >> a;
			if (a == 1)
			{
				no++;
				if (free == 0)
					use++;
				else
				{
					use++;
					free--;
				}
			}
			if (a == 2)
			{
				detect += no;
				no = 0;
				if (detect == 2)
				{
					free = use-2;
					use = 2;
				}
				else if (detect == 1)
				{
					free = use-1;
					use = 1;
				}
				else if (detect == 0)
				{
					continue;
				}
				else {
					free += (use - ((detect - 2) / 2) - 2);
					use = ((detect - 2) / 2)+2;
				}
			}
		}
		cout << free + use << endl;
	}
}