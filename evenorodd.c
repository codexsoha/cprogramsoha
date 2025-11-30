//even or odd
#include<stdio.h>
int main(void)
{
	int n;
	printf("Enter Any Number:");
	scanf("%d", &n);
	if (n%2==0)
	  printf("%d is EVEN Number",n);
	else
	  printf("%d is ODD Number",n); 
}
