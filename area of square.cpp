#include<stdio.h>
int main()
{
	float length,breadth,area;
	printf("enter length:");
	scanf("%f",&length);
	printf("\n enter breadth:");
	scanf("%f",&breadth);
	area=length*breadth;
	printf("\n the area of rectangle: %2f",area);
	return 0;
}
