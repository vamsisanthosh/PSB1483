#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the number one");
    scanf("%d",&a);
    printf("enter the number two");
    scanf("%d",&b);
    printf("enter the number three");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("this is the greatestnumber %d",a);
        }
        else
        {
            printf("this is the greatest number %d",b);
        }
    }
    else if(b>a)
    {
        if (b>c)
        {
            printf("this is the greatest number %d",b);
        }
         else
         {
             printf("this is the greatest number %d",c);
         }
        }
    }
