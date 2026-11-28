
#include <reg51.h>
sbit LED = P2^0;

void Timer1_Init(void);
void Timer1_Delay_50ms(void);
void Delay_500ms(void);

void main(void)
{
    LED = 0;

    Timer1_Init();

    while(1)
    {
        LED = 1;
        Delay_500ms();
        LED = 0;
        Delay_500ms();
    }
}

void Timer1_Init(void)
{
    TMOD = (TMOD & 0x0F) | 0x10;

    // Timer 1 Mode 1 (16-bit)
    TR1 = 0;
    TF1 = 0;
}
void Timer1_Delay_50ms(void)
{
    TH1 = 0x4C;
    TL1 = 0x00;

    TF1 = 0;
    TR1 = 1;

    while(TF1 == 0);
    TR1 = 0;

    
    TF1 = 0;
}


void Delay_500ms(void)
{
    unsigned char i;

    for(i = 0; i < 10; i++)
    {
        Timer1_Delay_50ms();
    }
}
