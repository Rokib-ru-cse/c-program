// A program to print whether a given number is even or odd
// coded by rokib ahmed. RU-CSE
// Email: rokibahmed.ru.cse@gmail.com

#include<stdio.h>
int main()
{
	int given_value;
	printf("Enter an integer number: ");
	scanf("%d",&given_value);
	if(given_value%2==0)
	{
		printf("The number %d is even\n",given_value);
	}
	else
	{
		printf("The number %d is odd\n",given_value);
	}
	return 0;
}
