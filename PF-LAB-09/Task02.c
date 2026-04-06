#include <stdio.h>
float applyDiscount(float price, int tier);
void printInvoice(float original, float discounted);
int main()
{
    float price;
    int tier;
    printf("What is the price of your product? ");
    scanf("%f", &price);

    printf("What tier of membership do you own?\n(1=Bronze, 2=Silver, 3=Gold, 4=Platinum) ");
    scanf("%d", &tier);

    float finalprice;
    finalprice = applyDiscount(price,tier);
    printInvoice(price,finalprice);
}
//Bronze gets 5%, Silver gets 10%, Gold gets 20%, and Platinum gets 30%.
float applyDiscount(float price, int tier){
    float discount;
    if(tier == 1) discount = 1 - 0.05;
    else if(tier == 2) discount = 1 - 0.1;
    else if(tier == 3) discount = 1 - 0.2;
    else if(tier == 4) discount = 1 - 0.3;
    return(price * discount);
}

void printInvoice(float original, float discounted){
    printf("Orignal price before discounts was %.2f\n", original);
    if(discounted > 2000.0){
        printf("Total price after discount is %.2f", discounted);
    }
    else printf("Total price after discount is %.2f and including delivery charges of 150 pkr is %.2f", discounted, discounted + 150.0);
    printf("\n");
}

