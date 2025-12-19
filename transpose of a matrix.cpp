 #include<stdio.h> 
   int main() 
  { 
   int i, j, mat[100][100], trans[100][100],ROW,COL; 
   printf("Enter the number of rows = "); 
   scanf("%d",&ROW); 
   printf("Enter the number of columns = "); 
   scanf("%d",&COL); 
   printf("Enter matrix:\n "); 
   // input matrix 
   for(i = 0; i < ROW; i++) 
     { 
        for(j = 0; j < COL; j++) 
        { 
         scanf("%d", &mat[i][j]); 
        } 
     } 
   // create transpose 
   for(i = 0; i < ROW; i++) 
        { 
           for(j = 0; j < COL; j++) 
         { 
                      trans[j][i] = mat[i][j]; 
                     } 
                  } 
   printf("Transpose matrix:\n "); 
   // print transpose 
   for(i = 0; i < COL; i++)  
     { 
      for(j = 0; j < ROW; j++) 
        { 
         printf("%d\t ", trans[i][j]); 
        } 
      printf("\n "); 
     } 
   return 0;
}
 
 


