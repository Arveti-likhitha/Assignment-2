#include<stdio.h>
#include<conio.h>

int main()
{
    int n, d, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    d = floor(n/10);
    r = d * 10;
    printf("The new number is: %d", r);
    return 0;
}
