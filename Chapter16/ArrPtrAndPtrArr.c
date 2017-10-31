#include<stdio.h>

void main13()
{
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int num4 = 40;
	int arr2d[2][4] = {1,2,3,4,5,6,7,8};
	int i, j;
	
	int *whoA[4] = { &num1,&num2,&num3,&num4 };
	int(*whoB)[4] = arr2d;
	
	printf("%d %d %d %d \n", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);

	printf("\n");
	printf("&whoB : %p \n", &whoB);
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d : ", whoB[i][j]);
			printf("%p ", &whoB[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("&arr2d : %p \n", &arr2d);
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d : ", arr2d[i][j]);
			printf("%p ", &arr2d[i][j]);
		}
		printf("\n");
	}
	
}