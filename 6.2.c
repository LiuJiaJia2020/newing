#include <stdio.h>
#include <string.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bubble_sort(int arr[], int len)
{
    int i, j;
 
    for(i = 0; i < len -1; i++) 
	{
        for(j = 0; j < len -1 -i; j++)
        {
            if(arr[j] > arr[j + 1]) 
	        {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int main()
{
    char arr[1000];
    int i;
    int len = sizeof(arr) / sizeof(*arr);
    printf(" ‰»Î ");
	scanf("%d",&arr) ;
 
    bubble_sort(arr, len);
    for(i = 0; i < len; i++)
	{
        printf("%d", arr[i]);
    }
    printf("\n");
}
