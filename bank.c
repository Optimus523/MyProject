#include <stdio.h>
#define TAX_RATE 0.18

int main(void)
{
    // declaration of a variable that stores the base price

    float base_value;
    printf("Enter base price of item (UGX): ");
    scanf("%f", &base_value);

    // Ensuring user does not enter a negative price 
    if (base_value < 0 || base_value == 0)
    {
        printf("Error: The item price must be greater than zero\n");
        return 1;
    }

    
    else if (base_value > 0 && base_value <= 50000)
    {
        // calculating the final cost given no discount

        float normal_price = base_value;
        float price_after_discount = base_value - 0.00;
        float tax_amount = TAX_RATE * price_after_discount;
        float final_cost = price_after_discount + tax_amount;

        // Display of a check like structure of the transaction for no discount

        printf("\tE-COMMERCE RECIEPT\n");
        printf("==================================================================\n");
        printf("Base Price:                 %.2f (UGX)\n",base_value);
        printf("Discount Applied (0%%):    %.2f (UGX)\n", normal_price);
        printf("Price After Discount:       %.2f (UGX)\n", price_after_discount);
        printf("Tax (18%%):                 %.2f (UGX)\n", tax_amount);
        printf("==================================================================\n");
        printf("FINAL TOTAL COST:           %.2f (UGX)\n", final_cost);
    }
    else if (base_value > 50000 && base_value <= 150000)
    {
        // calculating the final cost given standard discount

        float standard_discount = base_value * 0.10;
        float price_after_discount = base_value - standard_discount;
        float tax_amount = TAX_RATE * price_after_discount;
        float final_cost = price_after_discount + tax_amount;

        // Display of a check like structure of the transaction for standard_discount

        printf("\tE-COMMERCE RECIEPT\n");
        printf("==================================================================\n");
        printf("Base Price:                 %.2f (UGX)\n",base_value);
        printf("Discount Applied (10%%):    %.2f (UGX)\n", standard_discount);
        printf("Price After Discount:       %.2f (UGX)\n", price_after_discount);
        printf("Tax (18%%):                 %.2f (UGX)\n", tax_amount);
        printf("==================================================================\n");
        printf("FINAL TOTAL COST:           %.2f (UGX)\n", final_cost);
    }
    else if (base_value >= 150000)

    {
        // calculating the final cost given premium discount

        float premium_discount = base_value * 0.15;
        float price_after_discount = base_value - premium_discount;
        float tax_amount = TAX_RATE * price_after_discount;
        float final_cost = price_after_discount + tax_amount;

        // Display of a check like structure of the transaction for premium_discount

        printf("\tE-COMMERCE RECIEPT\n");
        printf("==================================================================\n");
        printf("Base Price:                 %.2f (UGX)\n",base_value);
        printf("Discount Applied (15%%):    %.2f (UGX)\n", premium_discount);
        printf("Price After Discount:       %.2f (UGX)\n", price_after_discount);
        printf("Tax (18%%):                 %.2f (UGX)\n", tax_amount);
        printf("==================================================================\n");
        printf("FINAL TOTAL COST:           %.2f (UGX)\n", final_cost);


    }

    return 0;
        
        
    }

