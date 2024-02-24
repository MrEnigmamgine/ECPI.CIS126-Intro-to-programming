// Joshua Mayes
// 5-5 // Final Exam
// 2024-02-22

#include <stdio.h>

// Global Variables, for easier editing later
float salesTax = 0.06;
float maxPrice = 10.00;

// Function definition (Not worth a prototype for a 1-line function)
float addSalesTax(float price)
{
    return price + (price * salesTax);
}

int main()
{
    int numItems;
    float totalSales = 0.0f;
    char welcomeMessage[] = "\
    Welcome to Hansen's Discount Supermarket!\n\n\
    We are sorry the scanner is broken at the moment.\n\
    Please enter your prices manually.\n";

    // Display welcome message
    puts(welcomeMessage);

    // Prompt user for number of items
    printf("How many items do you have to scan: ");
    scanf("%d", &numItems);
    float prices[numItems];

    // Required to store the prices in an array
    for (int i = 0; i < numItems; i++)
    {
        float price;
        // Prompt user for price of each item, constraining to less than $10
        do
        {
            printf("Enter the price of item %d: $", i + 1);
            scanf("%f", &price);
            if (price > maxPrice)
            {
                printf("Invalid price! Price must be less than or equal to $%.2f\n", maxPrice);
            }
        } while (price > maxPrice);
        prices[i] = price;   // Store prices in an array (That won't get used later)
        totalSales += price; // Use an accumulating total statement to compute the total sales
    }

    // Compute final total including tax
    float finalTotal = addSalesTax(totalSales);

    // Display total sales, tax, and final total
    printf("\n\nTotal Sales: $%.2f\n", totalSales);
    printf("Tax: %.2f\n", salesTax);
    printf("Final Total (including tax): $%.2f\n", finalTotal);

    return 0;
}
