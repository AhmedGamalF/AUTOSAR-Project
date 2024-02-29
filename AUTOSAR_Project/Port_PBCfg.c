/******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Mic-rocontroller - Port Driver
 *
 * Author: Ahmed_Gamal
 ******************************************************************************/

#include "PORT.h"

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between PORT_PBcfg.c and PORT.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
        ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
        ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
#error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between PORT_PBcfg.c and PORT.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
        ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
        ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
#error "The SW version of PBcfg.c does not match the expected version"
#endif

/* PB structure used with PORT_Init API */
const Port_ConfigType PORT_Configuration = {
                                            /*PORT A Initialization*/

                                             PORTA , PORTA_PIN_0 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTA , PORTA_PIN_1 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTA , PORTA_PIN_2 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTA , PORTA_PIN_3 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTA , PORTA_PIN_4 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTA , PORTA_PIN_5 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTA , PORTA_PIN_6 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTA , PORTA_PIN_7 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,


                                            /*PORT B Initialization*/

                                             PORTB , PORTB_PIN_0 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTB , PORTB_PIN_1 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTB , PORTB_PIN_2 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTB , PORTB_PIN_3 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTB , PORTB_PIN_4 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTB , PORTB_PIN_5 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTB , PORTB_PIN_6 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTB , PORTB_PIN_7 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,

                                            /*PORT C Initialization*/

                                             PORTC , PORTC_PIN_4 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTC , PORTC_PIN_5 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTC , PORTC_PIN_6 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTC , PORTC_PIN_7 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,

                                            /*PORT D Initialization*/

                                             PORTD , PORTD_PIN_0 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTD , PORTD_PIN_1 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTD , PORTD_PIN_2 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTD , PORTD_PIN_3 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTD , PORTD_PIN_4 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTD , PORTD_PIN_5 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTD , PORTD_PIN_6 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTD , PORTD_PIN_7 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,

                                            /*PORT E Initialization*/

                                             PORTE , PORTE_PIN_0 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTE , PORTE_PIN_1 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTE , PORTE_PIN_2 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTE , PORTE_PIN_3 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTE , PORTE_PIN_4 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTE , PORTE_PIN_5 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,

                                            /*PORT F Initialization*/

                                             PORTF , PORTF_PIN_0 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTF , PORTF_PIN_1 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTF , PORTF_PIN_2 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTF , PORTF_PIN_3 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,
                                             PORTF , PORTF_PIN_4 , PORT_PIN_OUT , OFF , PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO ,NO_DIRECTION_CHANGE ,NO_Mode_CHANGE ,

                                         };
