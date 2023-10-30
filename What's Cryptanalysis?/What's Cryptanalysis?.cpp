#include <bits/stdc++.h>
using namespace std;
int main() {
int count[256] = {0};
int length = 0;
char text;
while (cin >> text)
{
length++;
count[toupper(text)]++;
}
while(--length)
{
for(text = 'A'; text <= 'Z'; text++)
{
if(count[text] == length)
{
cout << text << " " << count[text] << endl;
}
}
}
return 0;
}
