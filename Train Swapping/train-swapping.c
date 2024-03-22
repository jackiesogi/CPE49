#include <stdio.h>

int main()
{
    int kase, n;

    scanf("%d", &kase);

    for(int i = 0; i < kase; i++)
    {
        scanf("%d", &n);
        int data[n];

        for(int j = 0; j < n; j++)
        {
            scanf("%d", &data[j]);
        }

        int count = 0;
        for(int k = n; k > 1; k--)
        {
            for(int l = 0; l < k - 1; l++)
            {
                if(data[l] > data[l+1])
                {
                    int temp = data[l];
                    data[l] = data[l+1];
                    data[l+1] = temp;
                    count++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps\n", count);
    }

    return 0;
}