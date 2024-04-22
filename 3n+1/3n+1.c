#include <stdio.h>

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

int answer[1000000] = {0};

int get_cycle(int num)
{
	if(answer[num] != 0)
	{
		return answer[num];
	}

	int count = 1;
	while(num != 1)
	{
		if(num & 0x0001)
		{
			num = num * 3 + 1;
		}
		else
		{
			num >>= 1;
		}
		count++;
	}
	answer[num] = count;
	
	return count;
}

int main()
{
	int a, b;
	
	while(scanf("%d %d", &a, &b) == 2)
	{
		int max_cycle = 0;

		for(int num = min(a, b); num <= max(a, b); num++)
		{
			int tmp_cycle = get_cycle(num);
			if(tmp_cycle > max_cycle)
			{
				max_cycle = tmp_cycle;
			}
		}
		printf("%d %d %d\n", a, b, max_cycle);
	}
	
	return 0;
}