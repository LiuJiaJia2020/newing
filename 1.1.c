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
    while(i < strlen(a))
    {
    	if(i!=s[j]) j++;
    	else 
    	{
	    	swap(a[i],a[j]);
	    	printf ("%d",a[i]);
	    	i++;
	    }
    }
		
	return 0;
}
