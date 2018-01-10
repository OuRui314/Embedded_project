#include <reg52.h>
#include <intrins.h>
#define LED P0

void delay1s(void)   //¾§ÕñÆµÂÊ12MHz£¬Îó²î0us
{
    unsigned char a, b, c;
    for(c = 167; c > 0; c--)
        for(b = 171; b > 0; b--)
            for(a = 16; a > 0; a--);
    _nop_();  //if Keil,require use intrins.h
}

void main(void)
{
    unsigned char i = 0;
    //LED = 0x01;
    //delay1s();
    for (i = 0; i < 8; i++)
    {
        LED = (0x01 << i);
        delay1s();
/*      
        if (7 == i)
        {
            i = -1;
        }
*/
    }
}