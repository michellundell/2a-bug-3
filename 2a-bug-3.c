#include <stdio.h>
#include <stdlib.h>


/*
** Print out the product of the first 100 integers
*/
 
int main(int argc, char **argv)
{
	unsigned long long p = 1;
	
	for(int i=0; i<60; i++) {
		p = p*i;
	}
	
	printf("The product of first 60 integers are %llu \n",p);

	return 0;
}
