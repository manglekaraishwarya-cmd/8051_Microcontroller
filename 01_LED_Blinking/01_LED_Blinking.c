
#include <reg51.h>

sbit LED = P2^0;

void delay(void)
{
    int i, j;

    for(i = 0; i < 100; i++)
    {
        for(j = 0; j < 1000; j++)
        {
        }
    }
}

void main(void)
{
    while(1)
    {
        LED = 1;
        delay();

        LED = 0;
        delay();
    }
}
