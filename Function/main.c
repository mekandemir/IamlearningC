#include <stdio.h>
#include <stdlib.h>

 	int multiplication(a,b)
 	int a,b;
 	{
 		int g ; //local variable
		g=a*b;
		return g;	
 		
 		
	 }

int main() {
		int x,y,z;
		printf("Enter two integers ");
		scanf("%d %d",&x,&y);
		z=multiplication(x,y);
		printf("Result :  %d ",z);
	
	
	
	
	
	
	
	
	return 0;
}
