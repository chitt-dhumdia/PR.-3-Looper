#include<stdio.h>
#include<conio.h>
void main()
{
	int num,count=0,rem;
	clrscr();
	printf("enter a number : ");
	scanf("%d", &num);
	while(num>0)
	{
		rem = num % 10;
		num = int(num/10);
		count++;

	}
	printf("total number of digit is : %d",count);
	getch();
}