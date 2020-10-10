#include <stdio.h>
#define  countof(a)  (sizeof(a)/sizeof(*(a)))
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b =temp; 
}
int main()
{
	char a[1000];
	char s[1000];
	int i=0,j=0;
	printf(" ‰»Î\n");
	scanf("%s%d",a,s);	
	strlen(a);
    for(i = 0;i<strlen(a);i++)
	{
	    for (j = 0;j<strlen(a);j++)
		{
			if(i=s[j])
			{
			swap (a[i],a[j]);
			}	
		} 
	}
	for (i = 0;i<strlen(a);i++)
	{
		printf ("%d",&a[i]);
	}
	return 0;
}