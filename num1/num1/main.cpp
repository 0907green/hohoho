/*
 * num1.cpp
 *
 * Created: 2018-05-02 오후 3:34:57
 * Author : stc_162
 */ 

#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD = 0xff;
	PORTD = 0xff;
	while (1)
	{
		for(int i=0; i<7; i++)
		{
			PORTD = ~(1 << i);
			_delay_ms(200);
		}
		for(int i=0; i<7; i++)
		{
			PORTD = ~(0x80 >> i);
			_delay_ms(200);

		}

	}
}