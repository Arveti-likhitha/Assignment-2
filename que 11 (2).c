#include<stdio.h>
#include<conio.h>

int main()
{
    int n, n1, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d, &n");
    n1 = n;
    while(n>0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = floor(n / 10);
    }

    printf("The number is %d%d",n1 ,sum);
    return 0;
}
