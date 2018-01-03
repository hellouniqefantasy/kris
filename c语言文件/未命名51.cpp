#include <stdio.h>
int main(void)
{
	int n;
	double sumeven=0.0;
	int ct_even=0;
	double sumodd=0.0;
	int ct_odd=0;

	while(scanf("%d",&n)==1&&n!=0)
	{
		if((n%2)==0)
		 ct_even++;
		 sumeven+=n;
		 if  ((n%2)==1)
		 ct_odd++;
		 sumodd+=n;
	}
	printf("%d,%d,%d,%d\n",ct_even++,sumeven/ct_even++,ct_odd,sumodd/ct_odd++);
	return 0;
}
