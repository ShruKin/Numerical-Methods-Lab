#include<stdio.h>
#include <math.h>
#define E 0.00001

double f(double x){
    return pow(x,3) - x - 4;
}

int main(int argc, char const *argv[])
{
    double a, b, x0, x1, x2;
    int n=0;

    do{
        printf("Enter the valus of a and b: ");
        scanf("%lf%lf", &a, &b);
    }while(foo(a)*foo(b) > 0);

    printf("\nn\tx0\t\tx1\t\tx2\t\tf(x2)\t\tf(x0)\t\tf(x1)\n");
    for(int i=0; i<26; i++)
        printf("----");
    printf("\n");

    x0 = a;
    x1 = b;
    do{
        x2 = x0 - ((f(x0)*(x1-x0))/(f(x1)-f(x0)));
        printf("%d\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", n++, x0, x1, x2, f(x2), f(x0), f(x1));

        if((f(x0)*f(x2)) < 0.0)
            x1 = x2;
        else
            x0 = x2; 
    }while(fabs(f(x2)) >= E);

    for(int i=0; i<26; i++)
        printf("----");
    printf("\n");

    printf("The root of the equation is: %lf\n", x2);

    return 0;
}
