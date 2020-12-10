
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tab[10][10],i,j,a,b,c,d;

int main()
{

for(j=0;j<10;j++)
{
for(i=0;i<10;i++)
{
tab[i][j] = rand()%100;
printf("%d\t", tab[i][j]);
}
printf("\n\n\n");
}

printf("\n");

for(j=0;j<10;j++)
{
for(i=0;i<10;i++)
{

if(i!=0 || i!=9 || j!=0 || j!=9 )
{

	a=tab[i-1][j];
	b=tab[i+1][j];
	c=tab[i][j-1];
	d=tab[i][j+1];
}

if(i==0 || i==9 || j==0 || j==9)
{

        a=tab[i-1][j];
        b=tab[i+1][j];
        c=tab[i][j-1];
        d=tab[i][j+1];

	if(i==0)
	{
	a=tab[9][j]; b=tab[1][j];
	}
	if(i==9)
	{
	b=tab[0][j]; a=tab[8][j];
	}
	if(j==0)
	{
	c=tab[i][9]; d=tab[i][1];
	}
	if(j==9)
	{
	d=tab[i][0]; c=tab[i][8];
	}
}

        if((a+b)>tab[i][j] && (c+d)<tab[i][j])
        {
        printf("tab[%d][%d]\t", i+1, j+1);
        }

        if((a+b)<tab[i][j] && (c+d)>tab[i][j])
        {
        printf("tab[%d][%d]\t", i+1, j+1);
        }

}
}

return 0;
}
