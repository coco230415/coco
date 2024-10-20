#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,y;
	char a;
	
	printf("Enter the calculation: ");
	scanf("%i %c %i", &x, &a, &y);
	
	if(a=='+')
       	printf("= %i", x+y);
   	else if (a=='-')
        printf("= %i", x-y);
    else if (a=='*')
        printf("= %i", x*y);
    else if (a=='/')
	    printf("= %i", x/y);
    else if (a=='%')
	    printf("= %i", x%y);  


	return 0;
}
