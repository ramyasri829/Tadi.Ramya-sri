#include <stdio.h> 
int main() { 
    // Constants for billing rates 
    double unitRate = 0.15;  // Cost per unit of electricity in dollars 
    double fixedCharge = 10.0;  // Fixed monthly charge in dollars 
 
    // Customer information 
    char customerName[50]; 
    int customerId; 
    int unitsConsumed; 
 
    // Input customer information 
    printf("Enter customer name: "); 
    fgets(customerName, sizeof(customerName), stdin); 
    printf("Enter customer ID: "); 
    scanf("%d", &customerId); 
    printf("Enter units consumed: "); 
    scanf("%d", &unitsConsumed); 
 
    // Calculate total cost 
double totalCost = fixedCharge + (unitsConsumed * unitRate); 
// Generate the electricity bill 
printf("\nElectricity Bill\n"); 
printf("Customer Name: %s", customerName); 
printf("Customer ID: %d\n", customerId); 
printf("Units Consumed: %d\n", unitsConsumed); 
printf("Cost per Unit: $%.2lf\n", unitRate); 
printf("Fixed Monthly Charge: $%.2lf\n", fixedCharge); 
printf("Total Cost: $%.2lf\n", totalCost); 
return 0; 
} 

