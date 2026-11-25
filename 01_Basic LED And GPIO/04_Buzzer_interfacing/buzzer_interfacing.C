#include <reg51.h>

sbit BUZZER = P2^0;

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
        BUZZER = 1;
        delay();

        BUZZER = 0;
        delay();
    }
}
