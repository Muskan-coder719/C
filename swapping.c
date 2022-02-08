#include<stdio.h>
#include<conio.h>
main()
{
  int a=10,b=20;
  printf("\n before swapping a=%d and b=%d",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\n after swapping a=%d and b=%d",a,b);
  return 0;
  getche();
}
