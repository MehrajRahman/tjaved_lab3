#include<stdio.h>
int main()
{
    int n;
    double  result = 0, population, area, density;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        printf("Enter Population: \n");
        scanf("%lf", &population);
        printf("Enter Area: \n");
        scanf("%lf", &area);

        density = population / area;
        
        if(density > 500 )
        {
            result++;
        }

    }

    printf("More Densed Country : %lf \n", result);
    return 0;
}