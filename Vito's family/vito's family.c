#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t, r;
	cin >> t;
	
	while ( t-- )
	{
		cin >> r;
		int s[r], sum = 0;
		for (int i = 0; i < r; i++)
		{
			cin >> s[i];
		}
		sort (s, s+r);
		
		int mid = s[r >> 1];		// 使用 邏輯右移 會比 除2 還要快
		for (int i = 0; i < r; i++)
		{
			sum += abs(s[i] - mid);
		}
		
		cout << sum << "\n"; 
	}
	
	return 0;
}
