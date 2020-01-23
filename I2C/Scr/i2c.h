/*
 * i2c.h
 *
 *  Created on: Jan 22, 2020
 *      Author: menna
 */

#ifndef I2C_H_
#define I2C_H_

#include"micro_config.h"
#include"std_types.h"
#include"common_macros.h"

/***************************************************************************
 * 							 Preprocessor Macros
 ***************************************************************************/
#define TW_START        0x08 /*A START condition has been transmitted*/
#define TW_REP_START         0x10  /*repeated Start */
#define TW_MT_SLA_W_ACK 0x18 /*Master transmit ( slave address + Write request ) to slave + Ack received from slave*/
#define TW_MT_DATA_ACK  0x28 /*Data byte will be transmitted and ACK will be received*/
#define TW_MT_SLA_R_ACK 0x40 /*Master transmit ( slave address + Read request ) to slave + Ack received from slave*/
#define TW_MR_DATA_ACK  0x50 /*Master received data and send ACK to slave*/
#define TW_MR_DATA_NACK 0x58 /*Master received data but doesn't send ACK to slave*/

/***************************************************************************
 * 							 Functions Prototypes
 ***************************************************************************/
void TWI_init(void);
void TWI_start(void);
void TWI_stop(void);
void TWI_write(uint8 data);
uint8 TWI_readWithAck(void); /*read with send Ack*/
uint8 TWI_readWithNack(void); /*read without send Ack*/
uint8 TWI_getStatus(void);
#endif /* I2C_H_ */
