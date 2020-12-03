
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

int tab[10][10],zarodek,i,j,przek[10];

zarodek=time(NULL);
srand(zarodek);

for(j=0;j<10;j++)
{
	for(i=0;i<10;i++)
	{
	tab[i][j]=rand()%100;
	//printf("%d ", tab[i][j]);
	}
}

	printf("\nprzekątna tablicy to ");
	for(j=0;j<10;j++)
	{
		for(i=0;i<10;i++)
		{
			if(i==j)
			{
			printf("%d ",tab[i][j]);
			przek[i]=tab[i][j];
			}
		}
	}

printf("\ndruga przekątna tablicy to ");
for(i=9;i>=0;i--)
{
printf("%d ", przek[i]);
}

	printf("\ntrzecia przekątna tablicy to ");
	for(j=0;j<10;j++)
	{
		for(i=0;i<10;i++)
		{
			if(i+j==9)
			{
			przek[i]=tab[i][j];
			printf("%d ",przek[i]);
			}
		}
	}

printf("\nczwarta przekątna tablicy to ");
for(i=0;i<10;i++)
{
printf("%d ", przek[i]);
}



return 0;
}
