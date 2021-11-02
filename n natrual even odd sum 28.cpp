#include<stdio.h>
void main()
{
   int n,s,e,o;
  n=5;
  s=n*(n+1)/2;
  e=n*(n+1);
  o=n*n;
    printf("sum of first %d natural numbers is %d\n",n,s);
   printf("sum of first %d even natural numbers is %d\n",n,e);
    printf("sum of first %d odd natural numbers is %d\n",n,o);
}
