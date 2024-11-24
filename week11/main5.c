#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void){
	FILE *fp = NULL;
	char c[15];
	int i=0;
	
	fp=fopen("sample.txt", "w");
	for(i=0;i<3;i++)
	{
		printf("input a word: ");
		scanf("%s", &c);
		fprintf(fp, "%s\n", c);
	}
	
	fclose(fp);
}
