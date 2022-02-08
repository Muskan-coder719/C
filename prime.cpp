#include<stdio.h>
#include<conio.h>
main()
{
	int num,prime;
	printf("enter the number:");
	scanf("%d",&num);
	prime=isprime(num,num/2);
	if(prime==1)
	{
		printf("\n %d is a prime number",num);
        }
	else
	{
		printf("\n %d is not a prime number ",num);
	}
	getche();
}
int isprime(int n,int i)
{
	if(i==1)
	{
		return 1;
	}
	else
	{
		if(n%i==0)
		{
			return 0;
		}
		else
		{
			isprime(n,i-1);
		}
	}
}
