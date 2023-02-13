#include<stdio.h>
int main(void)
{
	int a[10][10],b[10][10];
	int r,c,r1,c1,mul[10][10];
	printf("Enter the number of rows required: ");
	scanf("%d",&r);
	printf("Enter the number of columns required: ");
	scanf("%d",&c);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter a number: ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("Enter the Number of rows required: ");
	scanf("%d",&r1);
	printf("Enter the number of columns required: ");
	scanf("%d",&c1);
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter a number: ");
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c1;j++)
		{
			mul[i][j]=0;
			for(int k=0;k<c1;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
