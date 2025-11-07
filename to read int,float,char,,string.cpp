#include<stdio.h>
int main()
{
    int age;
    float weight;
    char gender;
    char name [200];
    printf("\n enter a name:'0;
    scanf("%s", & name);
    printf("\n enter your age:");
    scanf("%d", &age);
    printf("\n enter your weight");
    scanf("%f", & weight);
    printf("\n enter your gender");
    scanf("%c", & gender);
    printf("%d \n %s \n %f \n %c", age, name, weight, gender);
    return 0;
}
