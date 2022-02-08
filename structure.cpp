#include<stdio.h>
#include<conio.h>
struct employee
	{
		char name[20];
		int age,phoneno;
		float salary;
	}emp[20];
main()
{
	int i,n;
	printf("enter number of employees:");
	scanf("%d",&n);
	printf("Enter info as name, age, phone number, salary\n");
	for(i=0;i<n;i++)
        {
	scanf("\n %s%d%d%f",emp[i].name,&emp[i].age,&emp[i].phoneno,&emp[i].salary);
	}
	printf("\n entered details are :");
	printf("\n NAME\t AGE\t\t PHONENO\t\t SALARY");
       for(i=0;i<n;i++)
	{
	   printf("\n%s\t%d\t\t%d\t\t%d\n",emp[i].name,emp[i].age,emp[i].phoneno,emp[i].salary);
			
	}
    getche();
}
