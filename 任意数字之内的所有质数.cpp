#include<stdio.h>
int main()
{
	int x=0;
	int y=0;
	unsigned int count=0;
	for(x=2;x<2000;x++)
	{
		for(y=2;y<x;y++)
		{
			count++;
			if(x%y == 0)
			{
				break;
			}
		}
		if(x == y)
		{
			printf("%d\n",x);
		}
	}
	printf("\n\n\n");
	printf("运算的次数：%d",count);
	return 0;
 } 
