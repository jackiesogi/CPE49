#include <bits/stdc++.h>
using namespace std;

int main()
{
    int case;
    cin>>case;
    map<string, int> ans;
    while (case--)
    {
        string s;
        cin>>s;
        ans[s]++;
        
        cin>>s>>s;
    }
    
    for (auto it = ans.begin(); it != ans.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    
    return 0;
}
