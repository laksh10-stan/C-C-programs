#include <stdio.h>
#include <conio.h>
main()
{
	int i;
	for (i=0;i<=10;i++)
	{
		if (i==5)
		continue;
		printf ("%d",i);
	}
	printf ("\nHi");
}
