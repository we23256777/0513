#include<stdio.h>
int main()
{
	char str[];
	int i;
	
	printf("���ڿ� �Է� : ");
	scanf("%s",str);
	
	
	for(i = strlen(str); i,>= 0; i--)
	    purchar(str[i]);
		 
	return 0;
}
