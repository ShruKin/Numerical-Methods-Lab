#include <stdio.h>
#include <math.h>
#define E 0.0001

double f(double x){
    return (1 + (2/x));
    // 1/3 (x+4)2/3
}

int main(int argc, char const *argv[])
{
    double x0, x1;
    int n = 0;
    printf("Enter initial guess x0: ");
    scanf("%lf", &x0);

    printf("\nn\tx0\t\tf(x0)\t\t|x1-x0|\n");
    for(int i=0; i<12; i++, printf("----"));
    printf("\n");

    x1 = x0;
    do{
        x0 = x1;
        x1 = f(x0);

        printf("%d\t%lf\t%lf\t%lf\n", n++, x0, f(x0), fabs(x1-x0));
    }while(fabs(x1-x0) >= E);

    for(int i=0; i<12; i++, printf("----"));

    printf("\nRoot of the equation is: %lf\n", x1);

    return 0;
}
