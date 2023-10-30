#include <iostream>
using namespace std;

int main()
{
    int t, a, b, sum;
    cin >> t; // size of test case
    for (int i = 0; i < t; i++)
    {
      cin >> a >> b;
      sum = 0;
      if (a % 2 == 0)
      {
        a++;
      }
      while (a <= b)
      {
        sum = sum + a;
        a += 2;
      }
      cout << "Case " << i + 1 << ": " << sum << endl;
    }
    
    return 0;
}

