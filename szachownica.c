
#include <stdio.h>

int main()
{

int i,j,w,k;

printf("Podaj liczbe wierszy i kolumn (wiersze,kolumny)\n");
scanf("%d,%d", &w,&k);

for(j=1;j<=w;j++)
{
	for(i=1;i<=k;i++)
	{
	printf("%d\t", (i+j)%2);
	}
printf("\n\n");
}

return 0;
}

