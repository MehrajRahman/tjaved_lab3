#include <stdio.h>
int main()
{
    int n,  x, y, first = 0, second = 0, third = 0, fourth = 0, max;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        scanf("%d", &y);

        if (x > 0 && y > 0)
        {
            first++;
        }
        else if (x < 0 && y > 0)
        {
            second++;
        }
        else if (x < 0 && y < 0)
        {
            third++;
        }
        else
        {
            fourth++;
        }
    }

    if(first >= second){
        if(first >= third){
            if(first >= fourth){
                printf("Most points[ %d ] fall in first quadrant  \n", first);
            }
            else{
                printf("Most points[ %d ] fall in Fourth quadrant. \n", fourth);
            }
        }
        else{
            if(third >= fourth){
                printf("Most points[ %d ] fall in third quadrant. \n", third);
            }
            else{
                printf("Most points[ %d ] fall in Fourth quadrant. \n", fourth);
            }
        }
    }
    else{
       if(second >= third){
            if(second >= fourth){
                printf("Most points[ %d ] fall in Second quadrant. \n", second);
            }
            else{
                printf("Most points[ %d ] fall in Fourth quadrant. \n", fourth);
            }
        }
        else{
            if(third >= fourth){
                printf("Most points[ %d ] fall in third quadrant. \n", third);
            }
            else{
                printf("Most points[ %d ] fall in Fourth quadrant. \n", fourth);
            }
        } 
    }

    // printf("Teenage : %d \n", result);
    return 0;
}