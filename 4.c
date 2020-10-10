#include<stdio.h>
#include <string.h>
 int main()
 {
 	char a[1000000];
 	int i,flag = 1;
 	printf(" ‰»Î:nums = ");
	scanf("%s",&a);
    strlen(a);
	for(i = 0;i< strlen(a);i++)
	{
		if(i == a[i]) flag = 0; break;
		
	} 
	if (flag == 1) printf("-1");
	else printf("%d",a[i]);
	return 0;
 }
