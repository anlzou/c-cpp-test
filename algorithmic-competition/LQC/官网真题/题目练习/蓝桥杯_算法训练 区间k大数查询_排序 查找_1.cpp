#include<iostream>
using namespace std;
int main()
{
	int *p,n, m, l, r, k;
	int i, j, c, e = 0, u, max, a[1000];
	p=new int[1000];
	while (cin >> n)
	{
		for (i = 0; i < n; i++)
			cin >> p[i];
		cin >> m;
		for (j = 0; j < m; j++)
		{
			cin >> l >> r >> k;

			for (i = l - 1; i < r; i++)
				a[e++] = p[i];

			for (u = 1; u <= e - 1; u++)
			{
				for (c = 0; c <=e - u-1; c++)
				{
					if (a[c] < a[c + 1])
					{
						int t = a[c];
						a[c] = a[c + 1];
						a[c + 1] = t;
					}
				}
			}
			max = a[k-1];
				cout<<max<<endl;
				e = 0;
		}

	}
	delete[]p;
	return 0;
}
