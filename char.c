#include<stdio.h>
int main()
{
	char a, b;
	
	printf("�빮�� �Է� : ");
	a = getchar();
	fflush(stdin); 
	printf("�빮�� �Է� : ");
	b = getchar();
	
	printf("����� �Է��� %c�� �ҹ��ڴ� %c�Դϴ�.\n"a,a+32);
	printf("����� �Է��� %c�� �빮�ڴ� %c�Դϴ�.\n"b,b-32);
	return 0;
 } 
