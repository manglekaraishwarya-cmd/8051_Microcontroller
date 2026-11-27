#include <reg51.h>

sbit LED = P2^0;

void Timer0_Delay(void)
{
    unsigned int i;

    for(i = 0; i < 50; i++)
    {
        TMOD = 0x01;

        TH0 = 0x4C;
        TL0 = 0x00;

        TF0 = 0;
        TR0 = 1;

        while(TF0 == 0);

        TR0 = 0;
        TF0 = 0;
    }
}

void main(void)
{
    while(1)
    {
        LED = ~LED;

        Timer0_Delay();
    }
}