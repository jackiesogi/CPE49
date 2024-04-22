#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;

    while(scanf("%d %d", &a, &b) != EOF && a && b)
    {
        int start = (int)ceil(sqrt(a));
        int end = (int)sqrt(b);
        printf("%d\n", end-start+1);
    }

    return 0;
}

