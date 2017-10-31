#include<stdio.h>

void main6()
{
	double num = 3.14f;
	double *ptr = &num;
	double **dptr = &ptr;
	double *ptr2;

	printf("%9p %9p \n", ptr, *dptr);
	printf("%9g %9g \n", num, **dptr);
	ptr2 = *dptr;
	*ptr = 10.99f;
	printf("%9g %9g \n", num ,**dptr);

}