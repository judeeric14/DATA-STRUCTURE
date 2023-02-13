#include<stdio.h>
int main(void)
{
	int first,second,third,n;
	printf("Enter the range: ");
	scanf("%d",&n);
	first=0;
	second=1;
	printf("%d ",first);
	printf("%d ",second);
	for(int i=2;i<n;i++)
	{
		third=first+second;
	    printf("%d ",third);
		first=second;
		second=third;
		third=first+second;
	}
	return 0;
}
