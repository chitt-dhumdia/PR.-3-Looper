#include<stdio.h>
#include<conio.h>
void main()
{
	int sum=0,num,rem,count=0;
	clrscr();
	printf("please enter a number : ");
	scanf("%d", &num);
	while(num>0)
	{
		rem = num % 10;
		num = int(num/10);
		count++;
		if(count==1 || count==3)
		{
			sum = sum + rem;
		}
	}
	printf("%d",sum);
	getch();
}