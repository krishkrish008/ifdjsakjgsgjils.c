#include<stdio.h>
#include<math.h>
int main()
{
	int c;
	float a,b,d,e,g,h,i,j,o;
	printf("Enter the first term a");
	scanf("%f",&a);
	printf("Enter difference d");
	scanf("%f",&b);
	printf("Enter n term");
	scanf("%d",&c);
d=c;	
e=2*a;
g=(c-1);
j=g*b;
h=e+j;
i=d*h;
o=i*0.5;
printf("sum of arithmetic progression is %f",o);
	}
