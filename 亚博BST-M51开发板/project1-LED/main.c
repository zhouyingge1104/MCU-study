#include<reg52.h>
//#define led P0
int led1 = P1^0;
int led2 = P1^1;
int led3 = P1^2;
int led4 = P1^3;
int led5 = P1^4;
int led6 = P1^5;
int led7 = P1^6;
int led8 = P1^7;

void main()
{
	while(1)
	{
		led1 = 0; //light the first LED
		led2 = 0; 
		led3 = 0;
		led4 = 0;
		led5 = 0;
		led6 = 0;
		led7 = 0;
		led8 = 0;
		
	}
}