#include<stdio.h>
#include<conio.h>
int main()
{
	char ch='A';
	clrscr();
	do
	{
		if(ch=='A' || ch=='E' || ch=='I' || ch=='M' || ch=='Q' || ch=='U' || ch=='Y')

		{
			printf("%c ",ch);
		}
		ch++;

	}while(ch<='Z');
	getch();
	return 0;
}