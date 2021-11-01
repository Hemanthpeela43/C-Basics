#include<stdio.h>
int main()
{
	int a=10,b=2;
	int addition,subtraction,multiplication,division,modulodivision;
	addition=(a+b);
	subtraction=(a-b);
	multiplication=(a*b);
	division=(a/b);
	modulodivision=(a%b);
	printf("sum of a and b is: %d\n",addition);
	printf("difference of a and b is:%d\n",subtraction);
	printf("product of a and b is:%d\n",multiplication);
	printf("division of a and b is:%d\n",division);
	printf("remainder of a and b is:%d\n",modulodivision);
	printf("sun of arithematic operations is:%d\n",addition+subtraction+multiplication+division+modulodivision);

}
