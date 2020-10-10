#include <stdio.h>
#include <string.h>
#define N n
 void selection(int a[],int n)
{
 	int i;
 	int pos;
 	int max = -99999;
 	for(i=0;i<n;i++)
	{
	 	if(a[i]>max)
	 	{
	 		max=a[i];
	 		pos=i;
	 	}
	 }
	 int temp = a[n-1];
	 a[n-1] = max;
	 a[pos] = temp;
 }
 
 void selection_sort(int a[],int n)
{
 	int i;
 	for(i = n;i>1;i--)
 	{
	 	selection(a,i);
    }
}
 int main()
{
 	int i;
    char a[1000];
 	strlen(a);
 	printf(" ‰»Î:");
	scanf("%s\n",&a);
	selection_sort (a[1000],strlen(a));
	for(i = 0; i < strlen(a); i++)
	{
        printf("%d", a[i]);
    }
    return 0; 
 }