#include<stdio.h>
#include<conio.h>

int main()
{
    int  num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num & 1 == 1)
        printf("%d is an odd number: ", num);
    else
        printf("%d is an even number: ", num);

    return 0;
}
