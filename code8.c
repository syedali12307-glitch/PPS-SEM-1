#include <stdio.h>
int main ()
{

    float l,c,p;
    printf("enter the main radius:");
    scanf("%f",&l);
    c=l*l*3.14;
    p=2*3.14*l;
    printf("the area is:%f",c);
    printf("the perimeter is:%f",p);
    return 0;
}
