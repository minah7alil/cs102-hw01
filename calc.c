#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
		
		double m = atof(argv[2]);
		double n = atof(argv[3]);
		float z;
		char operator= argv[1][0];

	
		if (operator == '+'){
			z=m+n;
			printf("%g \n", z);}
		else if (operator == '-'){
			z=m-n;
			printf("%g \n", z);}
		
		else if (operator == '*'){
			z=m*n;
			printf("%g \n", z);}
		
		else if (operator == '/'){
			z=m/n;
			printf("%g \n", z);}
} 