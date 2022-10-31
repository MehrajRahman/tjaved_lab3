#include<stdio.h>
int main()
{
    int n, result_teen = 0,result_child = 0, result_senior = 0, age;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &age);
        if(age <= 12 )
        {
            result_child++;
        }
        else if(age <=19 && age >=13 )
        {
            result_teen++;
        }
        
        if( age >= 65 )
        {
            result_senior++;
        }

    }
    printf("Child : %d \n", result_child);
    printf("Teenage : %d \n", result_teen);
    printf("Senior Citizen : %d \n", result_senior);
    return 0;
}