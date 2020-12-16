#include <stdio.h>
#include <math.h>

float odl(float x1, float x2, float y1, float y2);
float wyn(float x1, float x2, float y1, float y2, float r1, float r2, float od);

int main()
{
float x1,x2,y1,y2,r1,r2,od;

printf("podaj współrzędne i promień okręgu 1 (x1,y1,r1):");
scanf("%f,%f,%f", &x1, &y1, &r1);

printf("podaj współrzędne i promień okręgu 2 (x2,y2,r2):");
scanf("%f,%f,%f", &x2, &y2, &r2);

od==odl(x1,x2,y1,y2);
wyn(x1,x2,y1,y2,r1,r2,od);

return 0;
}

float wyn(float x1, float x2, float y1, float y2, float r1, float r2, float od)
{
od==odl(x1,x2,y1,y2);
if(x1==x2 && y1==y2)
{
printf("okręgi współśrodkowe");
}
else if(sqrt(od) == fabs(r2-r1))
{
printf("okręgi styczne wewnętrznie");
}
else if(r1+r2 == sqrt(od))
{
printf("okręgi są styczne zewnętrznie");
}
else if(sqrt(od)<fabs(r2-r1))
{
printf("okręgi są rozłączne wewnętrznie");
}
else if(sqrt(od)>(r2+r1))
{
printf("okręgi są rozłączne zewnętrznie");
}
else if(fabs(r2-r1)<sqrt(od)<(r2+r1))
{
printf("okręgi przecinają się");
}
return 0;
}

float odl(float x1, float x2, float y1, float y2)
{
float a, b;
a=(x2-x1)*(x2-x1);
b=(y2-y1)*(y2-y1);
return sqrt(a + b);
}


