#include<stdio.h>
int main()
{
    int n,  marks, pass = 0;
    double result = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &marks);
        if(marks >= 60 )
        {
            pass++;
        }

        

    }
    result = (pass*1.0)/n;

    printf("Percentage : %.3lf \n", result);
    return 0;
}