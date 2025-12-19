

 


 

#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
   int a[50],i,j,k, count = 0, dup[50], size; 
    
   printf("Enter size of the array: "); 
   scanf("%d",&size); 
    
   printf("Enter Elements of the array:"); 
   for(i=0;i<size;i++) 
   { 
      scanf("%d",&a[i]); 
   } 
   
   for(i=0;i<size;i++) 
   { 
      for(j = i+1; j < size; j++) 
      { 
         if(a[i] == a[j]) 
         { 
            for(k = j; k <size; k++) 
            { 
               a[k] = a[k+1]; 
            } 
             
            size--; 
            j--; 
         } 
      } 
   } 
   printf("Array After deleting the duplicate element is:"); 
   for(i=0;i<size;i++) 
   { 
      printf("%d ",a[i]); 
   } 
} 
 

