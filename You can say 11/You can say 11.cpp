#include <bits/stdc++.h>
using namespace std;
int main()
{

  string entry;
  
  while (getline(cin, entry) && entry != "0")
  {
    
    bool isOdd = true;
    short sumOdd = 0;
    short sumEven = 0;
    
    for (char c : entry)
    {
      switch (isOdd) {
      case 0:
        sumEven += (atoi(&c));
        break;
      case 1:
        sumOdd += (atoi(&c));
        break;
      default:
        break;
      }
      isOdd = !(isOdd);
    }
    
    if (abs(sumOdd - sumEven) % 11 == 0) {
      printf("%s is a multiple of 11.\n", entry.c_str());
    }
    else
    {
      printf("%s is not a multiple of 11.\n", entry.c_str());
    }
  }
  return 0;
}
