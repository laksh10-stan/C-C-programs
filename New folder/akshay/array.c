#include<stdio.h>
main()
{
	 int a[10],i,j,n;
	printf("enter n");
	scanf("%d",&n);
		printf("enter  the value of array element ");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);	
		}
		printf("array display\n ");
		for(j=0;j<n;j++)
		{
		printf("a[%d]=%d\n",j,a[j]);	
		}
	}
