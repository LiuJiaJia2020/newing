#include <stdio.h>
#include<stdlib.h>
int main()
{
        char a[100];
        char *_strlwr(char *a); 
        int i=0,j=0;
        printf(" ‰»Î:\n");
        gets(a);
        while(a[i]!='\0')
        i++;
        i--;
        for(;j<=i;i--,j++)
    	{
    		if(a[i]!=a[j])
    		{
    			break;
    		}
    	}
    	if(j<=i)
    	{
    		printf("false\n",a);
    	}
    	else
    	{
    		printf("true\n",a);
    	}
    	system("pause");
        return 0;
}