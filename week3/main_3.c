#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char a,b;
	
	printf("enter a character: ");
	scanf("%c", &a);
	
	b = a + 1;
	printf("the next character of %c (%i) is %c (%i)\n", a, a, b, b);
	
	return 0;
}
