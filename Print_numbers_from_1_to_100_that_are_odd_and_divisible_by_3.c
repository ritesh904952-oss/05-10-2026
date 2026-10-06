#include<stdio.h>
int main()

{
    int i;
    printf("numbers from 1 to 100 that are odd and divisible by 3:");

    for (i=1 ; i<=100 ; i+=2)
    {
        if ( i % 3 == 0 )
        printf("\n%d",i);

    }
}
