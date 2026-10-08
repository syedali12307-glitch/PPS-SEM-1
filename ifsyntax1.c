#include<stdio.h>
int main()
{

    int a ;
    printf("Enter your age");
    scanf("%d",&a);
    if(a==18)
    {
        printf("Eligible  to vote");
    }
    else if(a>18)
    {
        printf("Eligible to vote");
    }
   else
   {
       printf("Not to eligible vote");
   }
   return 0;
}


