#include<stdio.h>
int main(void)
{
	int n,num;
	int v=0;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the number to search: ");
	scanf("%d",&num);
	for(int j=0;j<n;j++)
	{
		printf("Enter a number: ");
		scanf("%d",&arr[j]);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
			v=i;
			break;
		}
	}
	printf("It is in %d ",v);
	return 0;
	
}
