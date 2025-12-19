#include<stdio.h>
int main()
{
	int a=10,*ptr;
	float b=3.2,*ptr2;
	ptr=&a;
	ptr2=&b;
	printf("\n the value of a%d",a);
	printf("\n address of a%x",&a);
	printf("\n value of b%f",b);
	printf("\n the value of b%x",b);
	printf("\n the value of ptr %x",ptr);
	printf("\n the adress of ptr %x",&ptr);
	printf("\n the ptr pointing value %d",*ptr );
	printf("\n the ptr2 value %x",ptr2);
	printf("\n the address of ptr2 %x",&ptr2);
	printf("\n the ptr2 pointing value %f",*ptr2 );
	return 0;
}
