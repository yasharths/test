#include <stdio.h>
int main()
{
	int n; 		//for storing the number of elements in the array
	long constant = 1000000007; 		//the constant with whom we have to calculate the inverse modulo
	long prod=1;	//for storing the product of the numbers entered in the array
	int i;		//for looping
	scanf("%d",&n);
	int arr[n];	//creating the array of size n
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);		//accepting the elements of the array one by one
		prod = prod * arr[i];		//calculating the product 
	}
	prod = prod % constant;		//calculating the modulus of the product with the given constant
	printf("%ld",prod);
	return 0;
}


