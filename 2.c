#include<stdio.h>
#include <string.h>
int main()
{
	int i,sum;
	char a[1000];
	printf(" ‰»Î");
	scanf("%s",&a);
    int len = sizeof(a) / sizeof(*a);
	for (i = 0;i < len;i++)
	{
		if (a[i] == '+')
		{
			a[i] = a[i-2]+a[i-1];
		}
		if (a[i] == 'D')
		{
			a[i] = 2*a[i-1];
		} 
		if (a[i] == 'C')
		{
			a[i] = a[i-1];
		}
		else 
		{
			a[i] = a[i-1] + a[i];
		}
	}
	printf("%d",a[i]);
	return 0;
}