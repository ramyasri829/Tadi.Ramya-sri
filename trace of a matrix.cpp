   #include <stdio.h> 
     int main() 
       { 
 int i, j, rows, columns, trace = 0 ,Tra_arr[rows][columns]; 
          printf("Enter Matrix Rows = ");  
 scanf("%d", &rows); 
 printf("Enter Matrix Columns =  "); 
 scanf("%d",&columns); 
 printf("Please Enter the Matrix Items =  \n"); 
 for (i = 0; i < rows; i++) 
 { 
  for (j = 0; j < columns; j++) 
  { 
   scanf("%d", &Tra_arr[i][j]); 
   printf("%d\t",Tra_arr[i][j]); 
  } 
  printf("\n"); 
 } 
 
 for (i = 0; i < rows; i++) 
 { 
  for (j = 0; j < columns; j++) 
  { 
   if (i == j) 
   { 
    trace = trace + Tra_arr[i][j]; 
   } 
             } 
 } 
               printf("The Trace Of the Matrix = %d\n",trace);
           }
 
 


