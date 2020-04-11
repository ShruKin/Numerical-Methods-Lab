#include <stdio.h>
#include <math.h>
#define E 0.001

float f_x1(float x2, float x3){
    return (20 + 3*x2 - 2*x3)/8;
}

float f_x2(float x1, float x3){
    return (33 - 4*x1 + x3)/11;
}

float f_x3(float x1, float x2){
    return (9 - x1 - x2)/4;
}

float Round(float num){
    return floor((num*1000)/1000);
}

int main(int argc, char const *argv[])
{
    float x1=0, x2=0, x3=0, prev_x1, prev_x2, prev_x3;
    do
    {
        prev_x1 = x1;
        prev_x2 = x2;
        prev_x3 = x3;

        x1 = f_x1(x2, x3);
        x2 = f_x2(x1, x3);
        x3 = f_x3(x1, x2);

        // x1 = Round(x1);
        // x2 = Round(x2);
        // x3 = Round(x3);

        printf("%.3f\t%.3f\t%.3f\n", x1, x2, x3);
    }while(x1 != prev_x1 && x2 != prev_x2 && x2 != prev_x2);
    
    return 0;
}