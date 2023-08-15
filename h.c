/*#include<stdio.h>
int main()
{
    int x,y;
    for(x=5;x>0;x--)
    {
        for(y=5;y>x;y--)
        printf("%d",x);
        printf("\n");
    }
    

return 0;
}*/

#include <stdio.h>
int main()
{
    int x = 0,y = 0;
    int rows = 0;
    //printf("Enter the number of rows = ");
    //scanf("%d",&rows);
    for(x=1; x<=5; ++x)
    {
        for(y=x; y<= rows; ++y)
        {
            
            printf("%d",y);
        }
        printf("\n");
    }
    return 0;
}