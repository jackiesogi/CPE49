#include <stdio.h>

int main ()
{

	int kase, start, end;
	scanf("%d", &kase);
	
	for (int i = 0; i < kase; i++)
	{
		scanf("%d%d", &start, &end);
		
		int sum = 0;
		int current = start;
		
		while (current <= end)
		{
			// x & 1 will return 1 only if it is an odd
			if (current & 0x0001)
			{
				sum += current;
			}
			
			current++;
		}
		
		printf("Case %d: %d\n", i+1, sum);
	}

	return 0;
}
