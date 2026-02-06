#include <stdio.h>
struct student
{
    int roll;
    int marks;
};
int main()
{
    struct student s[100];
    int n,i,total=0;
    float avg;
    printf("\n enter n size");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n enter roll number");
        scanf("%d",& s[i].roll);
        printf("\n enter student %d marks",i+1);
        scanf("%d",& s[i].marks);
        total=total+s[i].marks;
        
    }
    avg=(float)total/n;
    printf("\n total marks=%d \n average marks=%f",total,avg);
    return 0;
}


