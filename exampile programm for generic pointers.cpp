#include<stdio.h>
int main()
{
	int a=10;
	float b=3.26;
	char c='v';
	void*ptr;
	ptr=&a;
	printf("\n ptr pointing value %d",*(int*)ptr);
	ptr=&b;
	printf("\n ptr pointing value %f",*(float*) ptr);
	return 0;
}
