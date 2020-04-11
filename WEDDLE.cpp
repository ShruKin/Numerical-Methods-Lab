#include<stdio.h>
#include<math.h>

float calc(float x)
{
      return (1/(1+x*x));
 }                  
int main()
{
      int interval, limit, count = 0;
      float upper_limit, lower_limit, interval_gap, sum = 0;
      printf("\nLower Limit:\t");
      scanf("%f", &lower_limit);
      printf("\nUpper Limit:\t");
      scanf("%f", &upper_limit);
      printf("\nTotal Intervals:\t");
      scanf("%d", &interval);
      interval_gap = (upper_limit - lower_limit) / interval;
      printf("\nInterval Gap:\t%f\n", interval_gap);
      do
     {
       sum = sum + ((3 * interval_gap / 10) * (calc(lower_limit)+ calc(lower_limit + 2 * interval_gap) + 5 * calc(lower_limit +interval_gap) +  6 * calc(lower_limit + 3 * interval_gap) + calc(lower_limit + 4 * interval_gap) + 5 * calc(lower_limit + 5 * interval_gap) + calc(lower_limit + 6 * interval_gap)));  
        lower_limit = lower_limit + 6 * interval_gap;  
     }while(lower_limit<upper_limit);
      printf("\nWeddle's Rule is satisfied.\n\nEvaluated Result:\t%f\n", sum);
      return 0;
   }

