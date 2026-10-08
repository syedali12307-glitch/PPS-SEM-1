#include <stdio.h>
int main()
{
    int a,b,c;
    printf("The selling price :");
    scanf("%d",&a);
    printf("the cost price:");
    scanf("%d",&b);
    if (a>b)
    {
        printf("profit");
    }
    else
    {
        printf("loss");
    }
    return 0;
}
