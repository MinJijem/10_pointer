#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	int i;
	int grade[5];
	int *ptr;
	int average=0;
	
	for(i=0;i<5;i++)
	{
		printf("grade[%i]= ",i);
		scanf("%d",&grade[i]);
	}

	ptr=grade;
	
	for(i=0;i<5;i++)
		printf("grade[%d]=%d\n",i,*(ptr+i));
		
	for(i=0;i<5;i++)
	{
		average+=*(ptr+i);
	}
	
	printf("average : %d",average/5);
	
	return 0;
}
