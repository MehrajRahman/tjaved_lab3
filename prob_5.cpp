#include<stdio.h>
int main()
{
    int n, result = 0;
    double cgpa;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        scanf("%lf", &cgpa);
        if(cgpa >= 3.5 )
        {
            result++;
        }

    }

    printf("Achieved 3.5 or more : %d \n", result);
    return 0;
}