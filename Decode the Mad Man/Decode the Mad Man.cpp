#include <bits/stdc++.h>
using namespace std;

int main() {
    string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    char str[10000];
    char arr[10000];
    while (fgets(str, 1000, stdin)) {
        int len = strlen(str);
        for (int i = 0; i < len - 1; ++i)
        {
            if (str[i] == ' ')
                arr[i] = ' ';
            else
            {
                str[i] = tolower(str[i]);
                char k = str[i];
                int pos = keyboard.find(k);
                arr[i] = keyboard[pos - 2];
            }
        }
        arr[len - 1] = '\0';
        printf("%s\n", arr);
    }

    return 0;
}
