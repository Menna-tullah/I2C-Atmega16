/*
 * common_macros.h
 *
 *  Created on: Jan 5, 2020
 *      Author: menna
 */

#ifndef COMMON_MACROS_H_
#define COMMON_MACROS_H_

/* set a certain bit in any register */
#define SET_BIT(REG,BIT_NUM) (REG |= (1<<BIT_NUM))

/* clear certain bit in any register */
#define CLEAR_BIT(REG,BIT_NUM) (REG &= (~(1<<BIT_NUM)))

/* toggle certain bit in any register */
#define TOGGLE_BIT(REG,BIT_NUM) (REG ^= (1<<BIT_NUM))

/* check if a certain bit is set in any register and return true if yes */
#define BIT_IS_SET(REG, BIT_NUM) (REG&(1<<BIT_NUM))

/*check if a certain bit is clear in any register and return true if yes */
#define BIT_IS_CLEAR(REG,BIT_NUM) (!(REG&(1<<BIT_NUM)))

#endif /* COMMON_MACROS_H_ */
