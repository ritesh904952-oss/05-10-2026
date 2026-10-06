#include<stdio.h>
int main()
{
    int i,a;
    printf("enter the number:");
    scanf("%d",&a);

     printf("the odd numbers to %d are:\n",a);

    for (i=1 ; i<=a ; i+=2)
    {
        printf("%d\n",i);
    }
      printf("the even numbers to %d are:\n",a);

      for (i=0 ; i<=a ; i+=2)
    {
        printf("%d\n",i);
    }

}