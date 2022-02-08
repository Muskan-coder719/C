#include<stdio.h>
#include<conio.h>
main()
{
	int choice;
	printf("\n MAIN MENU");
	printf("\n1.burger,Rs 129 \n2.pizza,Rs 239 \n3.french fries,Rs 99 \n4.pasta,Rs 179 \n5.sandwich,Rs 149");
	printf("\n enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
      case 1:
			printf("\n your choice is burger \n its price is Rs 129");
			break;
		case 2:
			printf("\n your choice is pizza \n its price is rs 239 ");
			break;
		case 3:
			printf("\n your choice is french fries \n its price is rs 99");
			break;
		case 4:
			printf ("\n your choice is pasta \n its price is Rs 179");
			break;
		case 5:
      	                printf("\n your choice is sandwich \n its price is Rs 149");
			break;
		default:
		        printf("\n invalid choice");
			}
			getche();
		}
