#include <stdio.h>
double factorial (int n)
{
	double p=1;
	int i;
	for (i=2; i<=n; i++)
	p*= i;
	return p;
}
int main ()
{
	int n;
	do{
		printf ("n: "); scanf("%d",&n);
	}
	while (n<0);
	printf ("factorial(n): %4.lf",factorial(n)); 
	return 0;
}
