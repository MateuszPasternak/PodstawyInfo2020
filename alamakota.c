
#include <stdio.h>

int i;
char zdanie[]="ala ma kota";

int main()
{

for(i=0;i<11;i++)
{
if(zdanie[i]!=32)
{
	if(i%2==0)
	{
	zdanie[i]=zdanie[i]-32;
	}
	else
	{
	zdanie[i]=zdanie[i];
	}
}
printf("\t%c ", zdanie[i]);
}
printf("\n");
return 0;
}
