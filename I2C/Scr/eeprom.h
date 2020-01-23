/*
 * eeprom.h
 *
 *  Created on: Jan 22, 2020
 *      Author: menna
 */

#ifndef EEPROM_H_
#define EEPROM_H_

#include"std_types.h"
/***************************************************************************
 * 							 Preprocessor Macros
 ***************************************************************************/
#define ERROR 0
#define SUCCESS 1

/***************************************************************************
 * 							 Functions Prototypes
 ***************************************************************************/
void EEPROM_init(void);
uint8 EEPROM_writeByte(uint16, uint8 );
uint8 EEPROM_readByte(uint16, uint8 *);


#endif /* EEPROM_H_ */
