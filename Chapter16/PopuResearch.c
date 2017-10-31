#include<stdio.h>

void main2()
{
	int villa[4][2];
	int popu, i, j;

	//가구별 거주인구 출력
	for ( i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d층 %d호 인구수  :  ", i + 1, j + 1);
			scanf_s("%d", &villa[i][j], sizeof(villa)/sizeof(int));
		}
		
	}
	//빌라의 층별 인구수 출력
	for (i = 0; i <4 ; i++)
	{
		popu = 0;
		popu += villa[i][0];
		popu += villa[i][1];
		printf("%d층 인구수 : %d \n", i+1, popu);
	}

}