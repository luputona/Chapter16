#include <stdio.h>

void SwapInptPointer(int **pPtr1, int **pPtr2)
{
	int *pTemp = *pPtr1;
	*pPtr1 = *pPtr2;
	*pPtr2 = pTemp;
}

void main8()
{
	int num1 = 100;
	int num2 = 200;
	int *ptr1, *ptr2;
	
	ptr1 = &num1;
	ptr2 = &num2;

	printf("*ptr1 : %d  *ptr2 : %d \n", *ptr1, *ptr2);
	SwapInptPointer(&ptr1,&ptr2);
	printf("*ptr1 : %d  *ptr2 : %d \n", *ptr1, *ptr2);

	printf("ptr1 : %d  &ptr1 : %d \n", &ptr1, ptr1);
}