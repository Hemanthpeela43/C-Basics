#include<stdio.h>
void main()
{
	char a;
	printf("enter a character (from user A-Z)");
	scanf("%c",&a);
	printf("the corresponding charter of %c is %d",a,a-64);
}
