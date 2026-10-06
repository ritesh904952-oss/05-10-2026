#include<stdio.h>
int main()


{
    int i;
    printf("numbers from 1 to 100 that are divisible by 5 are:");

    for (i=0 ; i<=100 ; i++)
    {
        if ( i % 5 == 0 )
        printf("\n%d",i);

    }
}