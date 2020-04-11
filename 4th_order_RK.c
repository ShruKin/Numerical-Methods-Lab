#include <stdio.h>

double f(double x, double y){
    return x + y;
}

int main(int argc, char const *argv[])
{
    double x0, y0, xn, y1, h, k1, k2, k3, k4, k;
    int n = 0;

    printf("Enter initial values of x and y: ");
    scanf("%lf%lf", &x0, &y0);
    printf("Enter x at which value of y is required: ");
    scanf("%lf", &xn);
    printf("Enter step size: ");
    scanf("%lf", &h);

    printf("\nn\tx0\t\tk1\t\tk2\t\tk3\t\tk4\t\tk\t\ty1\n");
    for(int i=0; i<28; i++)
        printf("----");
    printf("\n");

    do{
        k1 = h * f(x0, y0);
        k2 = h * f(x0+(h/2), y0+(k1/2));
        k3 = h * f(x0+(h/2), y0+(k2/2));
        k4 = h * f(x0+h, y0+k3);
        k = (k1 + (2*k2) + (2*k3) + k4)/6.0;

        y1 = y0 + k;
        printf("%d\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", n++, x0, k1, k2, k3, k4, k, y1);

        y0 = y1;
        x0 += h;
    }while(x0 <= xn);

    for(int i=0; i<28; i++)
        printf("----");
    printf("\n");

    printf("The value of y = %lf\n", y1);

    return 0;
}
