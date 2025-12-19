#include<stdio.h>   
#include<math.h> 
 int main()     
{     
int i,n,r,sum=0,temp;     
printf("enter the number=");     
scanf("%d",&n);     
temp=n;     
for (temp = n; temp != 0; ++i)  
   { 
       temp /= 10; 
   } 
for (temp = n; temp != 0;temp /= 10 )  
  { 
      r=temp%10;     
      sum=sum+pow(r,i);   
  }   
if(sum==n)     
printf("%d is armstrong  number ",n);     
else     
printf("not armstrong number");     
return 0;   
}  
 


