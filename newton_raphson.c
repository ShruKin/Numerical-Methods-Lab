#include <stdio.h>
#include <math.h>
#define E 0.00001

double fun(double x){
    return ((x * sin(x)) + cos(x));
}

double derivFun(double x){
    return (x * cos(x));
}

int main(int argc, char const *argv[])
{
    double a = 0, x, h;
    int n = 0;
    printf("f(%g) = %0.5lf\n", a, fun(a));
    while(fun(a) * fun(a+1) >= 0){
        printf("f(%g) = %0.5lf\n", a+1, fun(a+1));
        a++;
    }
    printf("f(%g) = %0.5lf\n", a+1, fun(a+1));

    x = a + 0.5;
    printf("\nThe root of the equation lies in the range [%g, %g]", a, a+1);
    printf("\nHence, considering the initial value of X as = %g\n", x);
    
    printf("\nn\t\tXn\t\tf(Xn)\t\t\tf'(Xn)\t\t\th\t\tXn+1\n");
    for(int i=0; i<26; i++)
        printf("----");
    printf("\n");

    do{
        h = fun(x)/derivFun(x);
        printf("%d\t\t%g\t\t%g\t\t%g\t\t%g", n++, x, fun(x), derivFun(x), h);
        x = x - h;
        printf("\t%0.5lf\n", x);
    }while(fabs(h) >= E);

    for(int i=0; i<26; i++)
        printf("----");
    printf("\n");

    printf("\n\nThe root of the equation is: %0.5lf\n\n", x);

    return 0;
}
