#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ex 0.0001

// double foo(double x){
//     return pow(x,3) - x - 4;
// }

double foo(double x){
    return pow(x,3) - x -11;
}
 
double bisection(bool table){
    int n = 1;
    double a, b, x0;
    do{
        printf("Enter the valus of a and b: ");
        scanf("%lf%lf", &a, &b);
    }while(foo(a)*foo(b) > 0);

    if(table){
            printf("%c", 218);
        for(int i=0; i<8; i++){
            for(int j=0; j<7; j++)
                printf("%c", 196);
            printf("%c", 194);
        }
        printf("\b%c\n", 191);

        printf("%cn\t%ca\t%cb\t%cf(a)\t%cf(b)\t%cx0\t%cf(x0)\t%c(b-a)\t%c\n", 179, 179, 179, 179, 179, 179, 179, 179, 179, 179);
        
        printf("%c", 195);
        for(int i=0; i<8; i++){
            for(int j=0; j<7; j++)
                printf("%c", 196);
            printf("%c", 197);
        }
        printf("\b%c\n", 180);
    }
    
    do{
        x0 = (a+b)/2;
        if(table)
            printf("%c%d\t%c%.3lf\t%c%.2lf\t%c%.3lf\t%c%.3lf\t%c%.3lf\t%c%.3lf\t%c%.3lf\t%c\n", 179, n++, 179, a, 179, b, 179, foo(a), 179, foo(b), 179, x0, 179, foo(x0), 179, (b-a), 179);
                
        if(foo(x0)>0) 
            b = x0;
        else if(foo(x0)<0)
            a = x0;
        else
            break;
    }while((b-a)>ex);

    if(table){
        printf("%c", 192);
        for(int i=0; i<8; i++){
            for(int j=0; j<7; j++)
                printf("%c", 196);
            printf("%c", 193);
        }
        printf("\b%c\n\n", 217);
    }
 
    return x0;
}

int main(void) {
	double b = bisection(true);
	    
    printf("The root is: %g\n", b);
    return 0;
}