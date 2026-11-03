#include<stdio.h>
#include<stdio.h>

/*Call by value*/
int addByValue(int a,int b)
{
	int res;
	res=a+b;
	return res;
}
/*Call by Reference*/
void swapByReference(int*a,int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a,b,res;
	int*ptr;
	int*arr;
	int n,i,sum;
	printf("Enter the first number:");
	scanf("%d,&a");
	printf("Enter the second number:");
	scanf("%d",&b);
	/*pointer Demonstration*/
	ptr=&a;
	printf("\npointer Demonstration:");
	printf("\nValue ofa=%d",*ptr);
	printf("\nAddress of a=%p",(void*)ptr);
	/*Call by Value*/
	res=addByValue(a,b);
	printf("\n\nCall by Value:");
	printf("\nsum=%d",res);
	
	/*Call by Reference*/
	swapByReference(&a,&b);
	printf("\n\nCall by Reference:");
	printf("\nAfter swapping,first number=%d",a);
	printf("\nAfter swapping,second number=%d",b);
	/*Dynamic Memory Allocation*/
	printf("\n\nDynamic Memory Allocation");
	printf("\nEnter the numbert of elements:");
	scanf("%d",&n);
	
	if(n<=0)
	{
		printf("Invalid number of elements.");
		return 1;
    }
    arr=malloc((size_t)n*sizeof(int));
    
    if(arr==NULL)
    {
    	printf("Memory allocation failed.");
    	return 1;
	}
	printf("Enter%d elements:\n",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sum=0;
	for(i=0; i<n; i++)
	{
		sum=sum+arr[i];
	}
	printf("Sum of dynamically allocated array=%d\n",sum);
	free(arr);
	return 0;
	
}
