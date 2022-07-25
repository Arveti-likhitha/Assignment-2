#include<stdio.h>
#include<conio.h>

int main()
{
    float amt, usd;
    printf("Enter the amount in INR: ");
    scanf("%f", &amt);
    usd = amt/76.23;
    printf("The entered amount in USD format is: %f", usd);
    return 0;
}
