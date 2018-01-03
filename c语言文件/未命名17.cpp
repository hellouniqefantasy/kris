#include <stdio.h> 
struct
{
	int num;
	char name[10];
	char sex;
	char job;
	union
	{
		int banji;
		char position[10];
	}category;
	
}person[2];
int main()
{
   int i;
   for(i=0;i<2;i++)
    {
    	scanf("%d %s %c %c",&person[i].num,&person[i].name,&person[i].sex,&person[i].job);
    	if(person[i].job=='s')
    	  scanf("%d",&person[i].category.banji);
    	else if(person[i].job=='t')
          scanf("%s",person[i].category.position);
        else printf("input error!");
    }
    printf("\n");
    printf("No.  Name sex job class/position\n");
    for(i=0;i<2;i++)
      {
      	if(person[i].job=='s')
      	printf("%-6d%-10s%-3c%-3c%-6d\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.banji);
      	else
        printf("%-6d%-10s%-3c%-3c%-6s\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.position);
      }
      return 0;
}
