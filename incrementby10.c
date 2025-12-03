//increment by 10
#include<stdio.h>
int main(void)
{
	int n;
	printf("Enter Any Value:");
	scanf("%d", &n);
	if(n>100)
	   n=n+10;
	printf("Value of n is: %d",n);
}
