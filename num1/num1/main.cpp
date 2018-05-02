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
    PORTD = 0xff;
	DDRD = 0xff;
    while (1) 
    {
		PORTD = 0x00;
		_delay_ms(300);
		PORTD = 0xff;
		_delay_ms(300);
    }
}

