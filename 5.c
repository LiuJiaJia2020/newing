#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000];
	char *_strlwr(char *s); 
	int len,i,flag = 1;
	printf(" ‰»Î:\n");
	scanf("%s",&s);
	strlen(s);
	for (i=0;i < strlen(s);i++)
	{
		if (s[i] != s[strlen(s)-1-i])
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1) printf("true\n");
	else printf("false\n");
	return 0;
}
