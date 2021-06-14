

#include <stdio.h>
#include <stdlib.h>

	float divide(a,b)
	int a,b;
 	{
 		int g ; //local variable
		g=a/b;
		return g;

	}

int main()
{	
	int x,y; float z;
		printf("Enter two integers ");
		scanf("%d %d",&x,&y);
		z=divide(x,y);
		printf("Result :  %f ",z);
	
	
	
}
