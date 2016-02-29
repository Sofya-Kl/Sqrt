#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c,d,x1,x2;
	printf("Enter a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	d=b*b-4*a*c;
	if (d=0){
		x1=x2=-b/2*a;
	}
	if (d<0){
		printf("no solution");
	}
	if (d>0){
		x1=(-b+sqrt(d))/2*a;
		x1=(-b-sqrt(d))/2*a;
	}
	
	return 0;
}
