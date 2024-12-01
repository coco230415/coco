#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	char name [10];
	double grade;
};

int main(void) {
	struct student s={23,"Eunseo",4.3};
	
	s.ID=23;
	strcpy(s.name,"Eunseo");
	s.grade=4.3;
	
	printf("ID:%d\n",s.ID);
	printf("name: %s\n",s.name);
	printf("grade:%f\n",s.grade);
	
	
}
	
