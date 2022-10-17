#include <reg51.h>
int n,p;
sbit led1=P1^0;
sbit led2=P1^1;
sbit led3=P1^2;
sbit led4=P1^3;
sbit led5=P1^4;
sbit led6=P1^5;
sbit led7=P1^6;
sbit led8=P1^7;
#define LEDS P1
#define DIP p2

main()
{
	int i;
	while(1)
	{
		n=0x01;
		for(p=0;p<8;p++)
		{
			LEDS = n^(0xFF);
			n=n<<1;
			for(i=0;i<0x7fff;i++);
		}
	}
	
}