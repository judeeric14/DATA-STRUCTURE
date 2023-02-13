#include<stdio.h>
int main(void)
{
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter a number:");
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<n;j++)
	{
		if(arr[j]%2==0)
		{
			printf("%d is an Even number ",arr[j]);
			printf("\n");
		}
		else
		{
			printf("%d is an Odd number",arr[j]);
			printf("\n");
		}
	}
	return 0;
		
}
