#include <stdio.h>
#include <math.h>
int prime (int n)
{
	int prime (int n) 
	{
		int i, value = 1 ;
		int dat = sqrt(n);
		for ( i = 2; i <= dat; i++)
		{
			if ( n  % i == 0)
			{
				dat = 0;
				break;
			}
			else
			{ 
			 dat = 1;
			}
		} return 0;
	}
}
void MinMaxDigits(int n)
{
	int digit;
	int min, max;
	digit = n % 10;
	n = n/10;
	min = max = digit;
	while (n>0)
	{
	digit = n % 10;
	n = n/10;
	if (min>digit)
	min = digit;
	if (max<digit)
	max = digit;
	}
	printf ("Max digit: %d\n", max);
	printf ("Min digit: %d\n", min);
}

int main ()
{
	int n, choice;
	do 
	{
		printf ("1-Process primes\n");
		printf ("2-min, max digit in an integer\n");
		printf ("3-Quit\n");
		printf ("Select: ");
		scanf ("%d", &choice);
		switch (choice)
		{
			case 1: do
			{
				printf ("A Positive integer: ");
				scanf ("%d", &n);
			}
			while (n<1);
			if (prime(n)==0)
			{
			printf ("It is a prime\n");
			scanf ("%d", &n);
			}
			else 
			{
			printf ("It is not a prime\n");
			scanf ("%d", &n);
			}
			break;
			case 2: do
			{ 
				printf ("a positive integer: ");
				scanf ("%d",&n);
			}
			while(n<0);
			MinMaxDigits(n);
			break;
		}
	}
	while (choice>0 & choice<3);
	return 0;
}

