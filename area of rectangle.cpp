#include<stdio.h>
int main()
{
	float breadth,height,area;
	printf("enter breadth and height values");
	scanf("%f %f",& breadth,& height);
	area=0.5*breadth*height;
	printf("\n the area of triangle is: %2f",area);
	
	return 0;
}
