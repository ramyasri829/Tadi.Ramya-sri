#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("\n enter temperature in fahrenheit:");
    scanf("%f",& fahrenheit);
    celsius=(fahrenheit-32)/1.8;
    printf("\n temperature in celsius %3f",celsius);
}
