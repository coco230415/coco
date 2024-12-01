#include <stdio.h>
#define STUDENTNUM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	int ID;
	int score;
};

int main (void){
struct student s[STUDENTNUM];
double sum = 0;
int highestScore = -1;
int highestID = -1;
int i;

for (i=0; i<STUDENTNUM; i++){
	printf("Input the ID: ");
	scanf("%d", &s[i].ID);
	
	printf("Input the score: ");
	scanf("%d", &s[i].score);

    sum += s[i].score;
	
	if (s[i].score > highestScore) {
	highestScore = s[i].score;
	highestID = s[i].ID;
	}	
}

double average = (double)sum / STUDENTNUM;

printf("\nThe average of the score: %.6f\n", average);
printf("The highest score - ID : %d, score : %d, score : %d/n", highestID, highestScore);

return 0;
}
