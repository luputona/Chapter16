#include<stdio.h>

void main77()
{
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int *ptr3 = &num3;
	
	int *ptrArr[] = { ptr1, ptr2, ptr3 };
	int **dptr = ptrArr;

	printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));

	printf("%p %p %p \n", &ptrArr, ptrArr, &(*ptrArr));
	printf("%p %p %p \n", &ptr1, ptr1, &num1);
	
	printf("\n\n");

	int arr2d[3][3];
	int **pptr = NULL;
	//pptr = &(*arr2d);

	printf("pptr : %d \n", arr2d);

	printf("%d \n", arr2d);
	printf("%d \n", arr2d[0]);
	printf("%d \n\n", &arr2d[0][0]);

	printf("%d \n", arr2d[1]);
	printf("%d \n\n", &arr2d[1][0]);

	printf("%d \n", arr2d[2]);
	printf("%d \n\n", &arr2d[2][0]);

	printf("sizeof(arr2d)   : %d \n", sizeof(arr2d));
	printf("sizeof(arr2d[0]): %d \n", sizeof(arr2d[0]));
	printf("sizeof(arr2d[1]): %d \n", sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]): %d \n", sizeof(arr2d[2]));


}