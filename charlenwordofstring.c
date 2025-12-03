
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[]= "Hello Welcome to \n C Lab \n";
	int lines=0, words=0, ch=0, i=0;
	printf("Given String:\n %s", str);
	while(str[i]!='\0')
	{
		if(str[i]==' ')words++;
		if(str[i]=='\n')lines++;
		ch++;
		i++;
	}
	printf("\nNo. of Lines in a Given String: %d",lines);
	printf("\nNo. of Words in a Given String: %d", words);
	printf("\nNo. of Characters in a given String: %d", ch);
}

