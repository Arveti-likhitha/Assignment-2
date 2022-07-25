#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, temp;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("The two numbers after swapping are: %d, %d",a, b);
    return 0;
}
