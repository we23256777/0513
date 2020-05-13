#include<stdio.h>
int main()
{
	char str[];
	int i;
	
	printf("문자열 입력 : ");
	scanf("%s",str);
	
	
	for(i = strlen(str); i,>= 0; i--)
	    purchar(str[i]);
		 
	return 0;
}
