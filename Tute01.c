#include<stdio.h>
int main()
{
	int i,marks[2],total;
	float average;
	
	for(i=0;i<2;i++)
	{
		printf("Enter the Marks:");
		scanf("%d",&marks[i]);
		total=total+marks[i];
	}
	average=total/2;
	printf("The Average is:%.2f",average);
	return 0;
}

