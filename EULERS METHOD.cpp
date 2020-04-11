#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float fun(float t,float y)
{
    float f;
    f= (-1)*2*t*y*y; //defining the first order and first degree differential equation given in problem statement
    return f;
}
float exactsol(float t)
{
	float ey;
	ey = 1/(1+ t*t); //defining the exact solution function
	return ey; 
}
int main()
{
    float t0,y0,h,tn,ey,a,r,p;
    printf("\nEnter t0,y0,h,tn: ");
    scanf("%f%f%f%f",&t0,&y0,&h,&tn);  // Entering the initial values,step length and final value of t
    printf("\n  t\t  y\t accurate y\tabsolute error\trelative error\tpercentage error\n");
    while(t0<tn)          //generating values of y from first till last value of t
    {
        y0=y0+h*fun(t0,y0); //EULER'S FORMULA
        t0=t0+h;          // updating value of t
        ey=exactsol(t0);  //calculating exact values of y
        a= fabs(ey - y0);  //calculating absolute error
        r= a/ey;           //calculating relative error
	   p=r * 100;          //calculating percentage error
        printf("%0.4f\t%0.4f \t %0.4f    \t%0.4f    \t%0.4f    \t%0.4f\n",t0,y0,ey,a,r,p);  // printing values of t , y , exact y , absolute error , relative error , percentage error.
    }
}
