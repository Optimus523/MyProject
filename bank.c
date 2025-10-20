#include <stdio.h>
#define TAX_RATE 0.18

int main(void)
{
    float discount, price_after_discount, tax_amount, final_cost,discount_rate;
    printf("A SIMPLE E-COMMERCE SYSTEM\n");

    float base_value;
    printf("Enter base price of item (UGX): ");
    scanf("%f", &base_value);

    if (base_value < 0 || base_value == 0)
    {
        printf("Error: The item price must be greater than zero\n");
        return 1;
    }

    
    if (base_value > 150000)
    {
        discount_rate = 0.15;
    }
    else if (base_value > 50000 && base_value <= 150000)
    {
       
        discount_rate = 0.10;
    }
    else

    {
       
        discount_rate = 0.00;

    }
    discount = base_value * discount_rate;
    price_after_discount = base_value - discount;
    tax_amount = price_after_discount * TAX_RATE;
    final_cost = price_after_discount + tax_amount;
    

    printf("\tE-COMMERCE RECIEPT\n");
    printf("==================================================================\n");
    printf("Base Price:                      %.2f   (UGX)\n",base_value);
    printf("Discount Applied(%.0f%%) :         -%.2f    (UGX)\n",discount_rate*100, discount);
    printf("Price After Discount:            %.2f   (UGX)\n", price_after_discount);
    printf("Tax (18%%):                      +%.2f    (UGX)\n", tax_amount);
    printf("==================================================================\n");
    printf("FINAL TOTAL COST:           %.2f (UGX)\n", final_cost);

    return 0;
        
        
    }

