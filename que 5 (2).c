#include<stdio.h>
#include<conio.h>

int main()
{
    int n, rem, sum;
    printf("Enter a 3-digit number: ");
    scanf("%d", &n);
    sum = 0;
    while(n > 0)
    {
        rem = n%10;
        sum = sum + rem;
        n = floor(n/10);
    }
    printf("The sum of the digits of the entered number is: %d", rem);
    return 0;
}
