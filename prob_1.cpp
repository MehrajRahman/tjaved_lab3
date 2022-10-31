#include<stdio.h>
int main()
{
    int n, result = 0, age;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &age);
        if(age <=19 && age >=13 )
        {
            result++;
        }

    }

    printf("Teenage : %d \n", result);
    return 0;
}