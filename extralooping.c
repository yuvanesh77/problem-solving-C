#include<stdio.h>

int main()
{
	int n,i,digit,rev=0;
	printf("Enter a number:");
	scanf("%d",&n);
	/* Multiplication Table*/
	printf("\nMultiplication Table of%d:\n",n);
	for(i=1;i<=10;i++)
	{
		printf("%dx%d=%d\n",n,i,n*i);
	}
	/*Reverse the Number*/
	i=n;
	while(i!=0)
	{
		digit=i%10;
		rev=rev*10+digit;
		i=i/10;
    }
    printf("\nReverse of%d=%d",n,rev);
    
    return 0;
}
