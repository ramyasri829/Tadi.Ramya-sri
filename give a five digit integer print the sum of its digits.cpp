#include<stdio.h> 
int main()  
{ 
    int n,i,temp,sum=0; 
    scanf("%d", &n); 
      for(i=1;i<=5;i++) 
         { 
             if((n>=10000)||(n<=99999)) 
              { 
                   temp=n%10; 
                   sum=sum+temp; 
                    n=n/10 ; 
              } 
        } 
    printf("%d",sum); 
} 

