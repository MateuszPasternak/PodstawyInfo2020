#include <stdio.h>

int main()
{
int k,i;
char zdanie[]="PTSNJH EFOJH RFR UQZXF";

printf("podaj max klucz\n");
scanf("%d", &k);

printf("\ndla klucza = %d\n", k);

for (i=0;i<22;i++)
{
if(zdanie[i]!=32)
{
	if(k>0)
	{
	zdanie[i]=65+(zdanie[i]+(65-k))%26;
	}
	if(k<0)
	{
	zdanie[i]=65+(zdanie[i]+(65+k))%26;
	}
}
else
{
zdanie[i]=32;
}
	printf("%c ", zdanie[i]);
}



return 0;
}
