#include<bits/stdc++.h>
using namespace std;
set<int> s;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n, a, b;
		cin >> n >> a >> b;
		if (n == 1)
			cout<<0<<endl;
		else
		{
			s.clear();
			for (int i=0;i<=n-1;++i)
			{
				int val = a * i + b * (n - 1 - i);
				s.insert(val);
			}
			for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
				cout<<*it<<" ";
			cout<<endl;
		}
	}
	return 0;
}
