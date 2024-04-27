#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char records[256] = {0};
	int n = 0, max = 0;

	scanf("%d", &n);
	getchar();

	for(int i = 0; i < n; i++)
	{
		char buf[1024];
		while(fgets(buf, sizeof(buf), stdin) != NULL)
		{
			for(int j = 0; j < strlen(buf); j++)
			{
				char c = buf[j];
				if(c == '\n' || c == '\0')
				{
					break;
				}
				
				if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
				{
					records[toupper(c)]++;
				}
			}
			break;
		}
	}

	while(1)
	{
		int max_freq = 0;
		char max_char = 0;
		
		for(int i = 'A'; i <= 'Z'; i++)
		{
			if(records[i] > max_freq)
			{
				max_freq = records[i];
				max_char = i;
			}
		}
		
		if(max_freq == 0)
		{
			break;
		}
		
		printf("%c %d\n", max_char, max_freq);
		records[max_char] = 0;
	}

	return 0;
}
