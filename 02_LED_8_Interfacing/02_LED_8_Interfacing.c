
#include <reg51.h>

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
        P1 = 0xFF;  // All LEDs ON
        delay();

        P1 = 0x00;  // All LEDs OFF
        delay();
    }
}
