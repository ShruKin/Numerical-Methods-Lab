#include<stdio.h>
#include<math.h>

float f(float x){
   /*	return (4*x-3*x*x);
	*/
	return (1/(1+x));
	
}

int main(){
	
	float a,b,n,h,sum1=0,sum2=0,sum,y0,yn;
	int i;
	
	printf("Enter the lower limit : ");
	scanf("%f",&a);
	printf("Enter the upper limit : ");
	scanf("%f",&b);
	printf("Enter the number of intervals : ");
	scanf("%f",&n);
	h=(b-a)/n;
	do
	{
	sum=sum + (h/2)*(f(a)+f(a+h));
	a=a+h;
	}while(a<b);
	printf("Answer : %.4f",sum);
	
	return 0;
}
