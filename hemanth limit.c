#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short int:\nsigned:%hd to %hd \n",SHRT_MIN,SHRT_MAX);
	printf("unsigned:%d to %hu",0,USHRT_MAX);
    printf("INT:\nsigned:%d to %d\n",INT_MIN,INT_MAX);
    printf("unsigned: %d to %u\n",0,UINT_MAX);
    printf("long int:\signed\n %ld to %ld\n",LONG_MIN,LONG_MAX);
    printf("unsigned:%D to %lu\n",0,ULONG_MAX);
    printf("long long int :\nsigned:%lld to % lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
      printf("UNsigned:%D to % llU\n",0,LONG_LONG_MAX);
}
