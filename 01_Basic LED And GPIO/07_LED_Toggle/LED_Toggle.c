#include <reg51.h>

sbit LED = P1^0;

void delay(void)
{
    int i, j;

    for(i = 0; i < 100; i++)
        for(j = 0; j < 1000; j++);
}

void main(void)
{
    LED = 0;

    while(1)
    {
        LED = ~LED;
        delay();
    }
}
