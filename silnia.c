
#include <stdio.h>

int main()
{

int i,silnia,n,j;

printf("podaj liczbe\n");
scanf("%d", &n);

do{

silnia=1;
i=n;
n--;

for(j=1;j<=i;j++)
{
silnia=silnia*j;
}
printf("\n%d silnia = %d", i, silnia);

}while(n>=1);



/*
int n;
long double i,silnia=1;			 //dla int n max=16, skutecznosc mozna poprawic uzywajac long int, ale wtedy n max to tylko 20//
					 //duzy wzrost max n otrzymamy stosujac long double, choc zapis jest troche mniej czytelny//
printf("podaj liczbe\n");
scanf("%d", &n);

	for(i=1;i<=n;i++)
	{
	silnia=silnia*i;
	printf("\n%Le silnia = %Le", i, silnia);
	}

printf("\n%Le\n", silnia);
*/

return 0;
}
