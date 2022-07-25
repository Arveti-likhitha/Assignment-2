#include<stdio.h>
#include<conio.h>

int main()
{
    int  num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num&1)
        printf("LSB of %d is 1", num);
    else
        printf("LSB of  %d is 0", num);

    return 0;
}
