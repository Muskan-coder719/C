#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,lcm;
	printf("Enter 2 integers:");
    scanf("%d%d", &a, &b);
    lcm = find_lcm(a,b);   
    printf("\n LCM of %d and %d is: %d", a, b, lcm);
    return 0;
  getche();
}
int find_lcm(int a, int b) 
{
  	static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
      return temp;
    }
}
  
