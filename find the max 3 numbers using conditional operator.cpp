  #include <stdio.h> 
    int main() 
   { 
    int marks[5];   // An array to store marks of 5 subjects 
    int total = 0;  // Variable to store the total marks 
    float average;  // Variable to store the average 
 
    // Input marks for 5 subjects 
    printf("Enter marks for 5 subjects:\n"); 
    for (int i = 0; i < 5; i++) 
     { 
        printf("Subject %d: ", i + 1); 
        scanf("%d", &marks[i]); 
        total += marks[i];  // Add the marks to the total 
    } 
    // Calculate the average 
average = (float)total / 5;  // Convert the total to a float for accurate average 
// Output the total and average 
printf("Total marks: %d\n", total); 
printf("Average marks: %.2f\n", average); 
return 0; 
} 

