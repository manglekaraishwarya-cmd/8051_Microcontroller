#include <reg51.h>

sbit LED = P2^0;
sbit SWITCH = P3^2;

void main(void)
{
    SWITCH = 1;

    while(1)
    {
        if(SWITCH == 0)
        {
            LED = 1;
        }
        else
        {
            LED = 0;
        }
    }
}
