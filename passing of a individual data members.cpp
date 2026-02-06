#include<stdio.h>
struct student
{
    int roll;
    float marks;
};
void display(int a,float b);
int main()
{
    struct student s1;
    printf("\n enter roll number");
    scanf("%d",&s1.roll);
    printf("\n enter student marks");
    scanf("%f",&s1.marks);
    display(s1.roll, s1.marks);
    return 0;
}
 void display(int a,float b)
 {
     printf("\n%d \n%f",a,b);
 }
