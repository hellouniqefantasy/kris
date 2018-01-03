#include <stdio.h> 
#define FORMAT "%d\n%s\n%f\n%f\n%f\n"

struct student
{
	int num;
	char name[20];
	float score[3];
}stu={12345,"Li Li",67.5,89,78.6};

int main()
{
	void print(struct student * p);
	print(&stu);
	return 0;

}
void print(struct student * p)
{
	int i;
	for(i=0;i<3;i++)
	printf(FORMAT,p->num,p->name,p->score[i]);
	printf("\n");
}
