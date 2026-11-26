#include <reg51.h>

void delay(void)
{
    int i, j;

    for(i = 0; i < 100; i++)
        for(j = 0; j < 1000; j++);
}

void main(void)
{
    while(1)
    {
        P2 = 0x01;
        delay();

        P2 = 0x03;
        delay();

        P2 = 0x07;
        delay();

        P2 = 0x0F;
        delay();

        P2 = 0xFF;
        delay();

        P2 = 0x00;
        delay();
    }
}