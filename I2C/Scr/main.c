/*
 * main.c
 *
 *  Created on: Jan 22, 2020
 *      Author: menna
 */

#include"micro_config.h"
#include"eeprom.h"

int main(void)
{
	uint8 val = 0;

	DDRD = 0xFF;
	PORTD = 0;

	/* initialize the  EEPROM */
	EEPROM_init();

	EEPROM_writeByte(0x0311,0x0F); /* write 0x0F in the EEPROM */
	_delay_ms(100);
	EEPROM_readByte(0x0311,&val); /* read 0x0F from the external EEPROM */

	while(1)
	{
		PORTD = val;
	}
	return 0;
}
