#include<stdio.h>
#include<conio.h>
main()
{
	int num, result;
    printf("Enter the number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("\n Sum of digits in %d is %d", num, result);
    return 0;
    getche();
}
int sum (int num)
{
	if (num != 0)
    {
    	return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}
