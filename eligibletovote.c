//eligiblibilty to vote
#include<stdio.h>
int main(void)
{
	int n;
	printf("Enter Any Age:");
	scanf("%d", &n);
	if (n>=18)
	  printf("%d is Eligible To Vote",n);
	else
	  printf("%d is Not Eligible to Vote",n); 
}
