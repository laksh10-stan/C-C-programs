#include <stdio.h>
#include <conio.h>
union point2

{
	int x;
	int y;
} ;
struct point1
{
	int x;
	int y;
	
};
main()
{    
	struct point1 p1;
	union point2 p2;
	p1.x=4;
	p1.y=5;
	printf("x=%d and y=%d",p1.x,p1.y);
	p2.x=4;
	p2.y=5;
    printf("x=%d and y=%d",p2.x,p2.y);  
}





