#include<stdio.h>
#include<conio.h>

int main()
{
    int n, r;
    printf("Enter the number: ");
    scanf("%d", &n);
    r = floor(n/10);
    printf("The entered number without it's last digit is: %d", r);
    return 0;
}
