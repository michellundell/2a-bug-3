#include <stdio.h>
#include <stdlib.h>


/*
** Print out the product of the first 100 integers
*/
 
int main(int argc, char **argv)
{
	long double p = 1;
	
	for(int i=1; i<=100; i++) {
		p = p*i;
	}
	
	printf("The product of first 100 integers are %Lf\n",p);

	return 0;
}
