#include<stdio.h>
#include<math.h>
int main()
{
	float principle,rate,simple_ interest,compound_ interest;
	int time;
	printf("enter principal amount:");
	scanf("%f",& principal);
	printf("\n enter interest rate:";
	scanf("%f",& rate);
	printf("\n enter time in years:");
	scanf("%d",& time);
	simple interest=(principal*rate*time/100);
	compound interest=principal*(pow(1+rate/100,time)-1);
	printf("\n simple interest:%2f",simple_interest);
	printf("\n compound interest:%2f",compound_ interest);
	return 0;
	}
