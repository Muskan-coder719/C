#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n;
    printf("enter the number of stairs:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=0;j<2*i;j++)
    	{
    		printf("%d",(j%2));
        } 
         printf("\n");
    }
    return 0;
    getche();
    }
