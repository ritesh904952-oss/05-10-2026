#include<stdio.h>
int main()


{
    int i;
    printf("numbers from 1 to 100 that are divisible by both 3 and 5:");

    for (i=0 ; i<=100 ; i++)
    {
        if ( i % 3 == 0 && i % 5 == 0 )
        printf("\n%d",i);

    }
}