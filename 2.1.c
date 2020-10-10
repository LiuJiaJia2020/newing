#include <stdio.h>
	int calPoints(char ** ops, int opsSize){
    int sum=0;  
    int Top=-1;
    int array[opsSize];
    for(int i=0;i<opsSize;i++)
    {
        switch(ops[i][0])
        {
            case '+':
                array[++Top]=array[Top]+array[Top-1];
                sum+=array[Top];
                break;
            case 'C': 
                sum-=array[Top--];
                break;
            case 'D':
                array[++Top]=array[Top]*2;
                sum+=array[Top];
                break;
            default: 
                array[++Top]=atoi(ops[i]);
                sum+=array[Top];
        }
    }
            return sum;
}