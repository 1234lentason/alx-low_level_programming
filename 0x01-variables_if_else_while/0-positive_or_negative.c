#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void){
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
                
	printf("%d The value of n is\n" n);

         if n>0 
		 printf("%d n is positive" n);
	 
	 else if (n==0)
	 printf("%d is zero\n" n);
	 
	 else (n<0)
		 printf("%d is negative\n" n);
	 
return (0);
}
