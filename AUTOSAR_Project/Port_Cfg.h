/******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_Cfg.h
 *
 * Description: Configuration header file for TM4C123GH6PM Mic-rocontroller - Port Driver
 *
 * Author: Ahmed_Gamal
 ******************************************************************************/


#ifndef PORTCFG_H_
#define PORTCFG_H_

/*
 * Module Version 1.0.0
 */
#define PORTCFG_SW_MAJOR_VERSION             	    (1U)
#define PORTCFG_SW_MINOR_VERSION             	    (0U)
#define PORTCFG_SW_PATCH_VERSION             	    (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORTCFG_AR_RELEASE_MAJOR_VERSION            (4U)
#define PORTCFG_AR_RELEASE_MINOR_VERSION            (0U)
#define PORTCFG_AR_RELEASE_PATCH_VERSION            (3U)


/* Pre-compile option for Development Error Detect */
#define PORT_DEV_ERROR_DETECT                     (STD_ON)

/* Pre-compile option for Version Info API */
#define PORT_VERSION_INFO_API                     (STD_OFF)


/* Pre-compile option for presence of Port_SetPinDirection API */
#define PORT_SET_PIN_DIRECTION_API                (STD_OFF)


/* Pre-compile option for presence of Port_SetPinMode API */
#define PORT_SET_PIN_MODE_API                     (STD_OFF)

/*number of ports*/
#define PORT_NUMBER_OF_PORTS                         (6U)

/*number of Pins*/
#define PORT_NUMBER_OF_PINS                          (8U)

/* Number of the configured PORT PINS */
#define PORT_CONFIGURED_PINS                          (43U)


/* PORTS */
#define PORTA                                        (0U)
#define PORTB                                        (1U)
#define PORTC                                        (2U)
#define PORTD                                        (3U)
#define PORTE                                        (4U)
#define PORTF                                        (5U)

/* PORT A PINS */
#define PORTA_PIN_0                              (0U)
#define PORTA_PIN_1                              (1U)
#define PORTA_PIN_2                              (2U)
#define PORTA_PIN_3                              (3U)
#define PORTA_PIN_4                              (4U)
#define PORTA_PIN_5                              (5U)
#define PORTA_PIN_6                              (6U)
#define PORTA_PIN_7                              (7U)

/* PORT B PINS */
#define PORTB_PIN_0                              (0U)
#define PORTB_PIN_1                              (1U)
#define PORTB_PIN_2                              (2U)
#define PORTB_PIN_3                              (3U)
#define PORTB_PIN_4                              (4U)
#define PORTB_PIN_5                              (5U)
#define PORTB_PIN_6                              (6U)
#define PORTB_PIN_7                              (7U)

/* PORT C PINS (EXCLUDING JTAG PINS PC0 TO PC3 */
#define PORTC_PIN_4                              (4U)
#define PORTC_PIN_5                              (5U)
#define PORTC_PIN_6                              (6U)
#define PORTC_PIN_7                              (7U)

/* TIVA_C PORT D PINS */
#define PORTD_PIN_0                              (0U)
#define PORTD_PIN_1                              (1U)
#define PORTD_PIN_2                              (2U)
#define PORTD_PIN_3                              (3U)
#define PORTD_PIN_4                              (4U)
#define PORTD_PIN_5                              (5U)
#define PORTD_PIN_6                              (6U)
#define PORTD_PIN_7                              (7U)

/* PORT E PINS */
#define PORTE_PIN_0                              (0U)
#define PORTE_PIN_1                              (1U)
#define PORTE_PIN_2                              (2U)
#define PORTE_PIN_3                              (3U)
#define PORTE_PIN_4                              (4U)
#define PORTE_PIN_5                              (5U)


/*  PORT F PINS */
#define PORTF_PIN_0                              (0U)
#define PORTF_PIN_1                              (1U)
#define PORTF_PIN_2                              (2U)
#define PORTF_PIN_3                              (3U)
#define PORTF_PIN_4                              (4U)



#endif /* PORTCFG_H_ */
