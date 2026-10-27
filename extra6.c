#include <stdio.h>

float area(float r)
{
	return 3.14 * r *r;
	
}
int sumSquares(int n)
{
	if(n ==0)
	return 0;
  else
  return n* n+ sumSquares(n-1);
  
}
 
 int main()
 {
 	float r;
 	int n;
 
  printf("Enter the radius:");
  scanf("%f",&r);
  
  printf("Area of circle = %.2f\n",area(r));
  
  
  printf("Enter a number:");
  scanf("%d",&n);
  
  printf("Sum of squares = %d",sumSquares(n));
  
  return 0;
}

 	
 
