#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int a, b;
	
	while (cin >> a >> b && a && b)
	{
		int start = (int)sqrt(a);
		if (start != sqrt(a))
		{
			start++;
		}
		
		int end   = (int)sqrt(b);
		cout << end - start + 1 << "\n";
	}
	
	return 0;
}
