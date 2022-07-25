#include<stdio.h>
#include<conio.h>

int main()

{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The two numbers after swapping are: %d, %d",a, b);
    return 0;
}
