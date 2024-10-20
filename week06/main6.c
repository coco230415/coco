#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 77;
	int num;
	int t;
	
	do
	{
		printf("Guess a number: ");
		scanf("%i", &num);
			t++;
		if(num>answer)
		{
			printf("High!\n");
		}
	    else if(num<answer){
	        printf("Low!\n");
	    }
	    else
	         break;
}		
	while(num>answer || num<answer);
	
	printf("Congratulation! Trials:%i", t);
	
	return 0;
}
