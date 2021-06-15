#include <stdio.h>
#include <stdlib.h>



/*Function that adds the first two numbers of three numbers entered from the keyboard
and then divides them by the third.*/



float operation(a,b,c)
int a,b,c;
{
	float g;
	
	g=(c/(a+b));
	
	return g;
}


int main() {
	
	int x,y,z;
	float result;
	printf("Enter an integer: ");
	scanf("%d",&x);
	printf("Enter an integer : ");
	scanf("%d",&y);
	printf("Enter an integer: : ");
	scanf("%d",&z);
	
	result=operation(x,y,z);
	printf("Result : ",result);

	
	return 0;
}
