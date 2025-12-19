#include<stdio.h> 
int main() 
{ 
    int arr[100],key,i,size,flag=0; 
    printf("Enter the array size:"); 
    scanf("%d",&size); 
     
    printf("Enter the elements:"); 
    for(i=0;i<size;i++) 
    { 
    scanf("%d",&arr[i]); 
    } 
    printf("Enter element to search\n"); 
    scanf("%d",&key);  
    for(i = 0; i < size; i++) 
    { 
        if(arr[i] == key) 
        { 
            flag = 1; 
            break; 
        } 
    } 
    if(flag == 1) 
        printf("Search Found\n"); 
    else 
        printf("Search Not Found\n"); 
 
    return 0; 
}
 


 


