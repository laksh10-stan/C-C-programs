#include<stdio.h>

void swap(int ,int );
main()
{
	int m,n;
	printf("enter the  two values");
	scanf("%d %d",&m,&n);
	swap(m,n);
}

	void swap (int a,int b)
	{
	
	int t;
	t=a;
	a=b;
	b=t;
		printf("value after swap a=%d,b=%d",a,b);
}
