#include<stdio.h>

void main12()
{
	int arr1[2][2] = 
	{
		{1,2},{3,4}
	};
	int arr2[3][2] = 
	{
		{1,2},{3,4},{5,6}
	};
	int arr3[4][2] = 
	{
		{1,2},{3,4},{5,6},{7,8}
	};
	int (*ptr)[2];
	int i;
	
	ptr = arr1;
	printf("**show 2.2 arr1 **\n");
	for (i = 0; i < 2; i++)
	{
		printf("%d %d \n", ptr[i][0], ptr[i][1]);
	}
	printf("\n");
	ptr = arr2;
	for (i = 0; i < 3; i++)
	{
		printf("%d %d \n", ptr[i][0], ptr[i][1]);
	}
	printf("\n");
	ptr = arr3;
	for (i = 0; i < 4; i++)
	{
		printf("%d %d \n", ptr[i][0], ptr[i][1]);
	}
}