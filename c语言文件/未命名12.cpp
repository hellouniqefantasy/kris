#include <stdio.h> 
#include <string.h>
struct student
{
	int num;
	char name[20];
	float score[3];
};
int main()
{
	void print(struct student);
	struct student stu;
	stu.num=12345;
	strcpy(stu.name,"Li Li");
	stu.score[0]=67.5;
	stu.score[1]=89;
	stu.score[2]=78.6;
	print(stu);
	return 0;

}
void  print(struct student stu)
{
	printf("%d\n%s\n%f\n%f\n%f\n",stu.num,stu.name,stu.score[0],stu.score[1],stu.score[2]);
	printf("\n");
}
