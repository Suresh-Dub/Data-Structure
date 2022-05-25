#include <stdio.h>
int main()
{
	char ch;
	while(1)
	{
		printf("Enter any character: ");
		ch=fgetc(stdin);
		
		if(ch==0x0A)
		{
			printf("ENTER KEY is pressed.\n");
			break;
		}
		else
		{
			printf("%c is pressed.\n",ch);
		}
		ch=getchar();
	}
	return 0;
}