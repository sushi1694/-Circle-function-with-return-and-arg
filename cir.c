#include<stdio.h>
#include<conio.h>
int a(float r);
int c(float ra);
int main()
{
	float r,ra;
	a(r);
	c(ra);
	return 0;
}
int a(float r)
{
	float ar;
	printf("Enter the radius: ");
	scanf("%f",&r);
	ar=3.14*r*r;
	printf("Area of circle= %f cm^2\n",ar);
	return 0;
}
int c(float ra)
{
	float cir;
	printf("Enter the radius: ");
	scanf("%f",&ra);
	cir=2*3.14*ra;
	printf("Circumference of circle= %f cm\n",cir);
	return 0;
}
