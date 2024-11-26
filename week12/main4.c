#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i;
	int ave=0;
	int grade[5];
	int *ptr;
	ptr=grade;
	
	for(i=0;i<5;i++)
	{
		
		printf("Input value - grade[%i]= ", i);
		scanf("%d", &grade[i]);
	}
	
	for(i=0;i<5;i++)
	{
		
		ptr[i]=*(ptr+i);
		ave+=ptr[i];
		printf("grade[%d] = %d\n",i,ptr[i]);
	}
	printf("average: %d", ave/5);
	
	return 0;
}
