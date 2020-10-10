#include <stdio.h> 
#include <string.h>
void choice(int *a,int n)
{
	int i,j;
	int temp;
	for(i=0;i<n-1;i++)
		{
		for(j=i+1;j<n;j++)
			{
			if(a[i]<a[j])
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;	 
		}
	}
}
int main()
{
	int i = 0;
	char a[1000];
	strlen(a);
	printf("ÊäÈë ");
	scanf("%s",&a);
	choice(a[1000],strlen(a));
    for(; i < strlen(a); i++)
	{
        printf("%d", a[i]);
    }
    
}