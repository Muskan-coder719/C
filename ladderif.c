#include<stdio.h>
#include<conio.h>
main()
{
int marks;
	printf(" enter your marks:");
	scanf("%d",&marks);
	if(marks>=85 && marks<=100)
	{
		printf(" grade A");
	}
	else if(marks>=70 && marks<=84)
	{
		printf(" grade B");
	}
	else if(marks>=55 && markS<=69)
         {
		printf(" grade C");
	}
	else if(marks>=40 && marks<=54)
	{
		printf(" grade D");
	}
	else
	{
              printf(" grade F");
	}
	getche();
}

