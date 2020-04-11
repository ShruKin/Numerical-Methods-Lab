#include <stdio.h>
#include <math.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
    double *x, *y, X;
    int n;
    printf("Enter the no. of points: ");
    scanf("%d", &n);

    x = (double*) malloc(n * sizeof(double));
    y = (double*) malloc(n * sizeof(double));

    printf("Enter the values of x and y:-\n");
    for(int i=0; i<n; i++){
        printf("x0 = ");
        scanf("%lf", &x[i]);
        printf("y0 = ");
        scanf("%lf", &y[i]);
    }

    printf("\nx |");
    for(int i=0; i<n; i++){
        printf("%lf\t|", x[i]);
    }
    printf("\ny |");
    for(int i=0; i<n; i++){
        printf("%lf\t|", y[i]);
    }
    printf("\n");

    printf("\nEnter x for which y should be calculated: ");
    scanf("%lf", &X);

    float sum = 0.0, prod = 1.0;
    for(int i=0; i<n; i++){
        prod = 1.0;
        for(int j=0; j<n; j++){
            if(j != i)
                prod *= (X - x[j])/(x[i] - x[j]);
        }
        sum += (prod*y[i]);
    }

    printf("\nf(%lf) = %lf", X, sum);

    printf("\n");
    return 0;
}
