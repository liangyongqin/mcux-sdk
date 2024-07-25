/*
 * Copyright 2021-2023 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

/*! @name PORTC0 (number 37), U12[5]/J2[9]/J13[6]/U27[8]/I2C1_SCL
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITLEDSPINS_LED1_R1_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_LED1_R1_GPIO_PIN_MASK (1U << 0U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITLEDSPINS_LED1_R1_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITLEDSPINS_LED1_R1_PIN 0U                   /*!<@brief PORT pin number */
#define BOARD_INITLEDSPINS_LED1_R1_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                                            /* @} */

/*! @name PORTC6 (number 44), J5[5]/SW3/LPSPI1_PCS1/WUU0_P11
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITLEDSPINS_LED2_Y2_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_LED2_Y2_GPIO_PIN_MASK (1U << 6U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITLEDSPINS_LED2_Y2_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITLEDSPINS_LED2_Y2_PIN 6U                   /*!<@brief PORT pin number */
#define BOARD_INITLEDSPINS_LED2_Y2_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                                            /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLEDsPins(void);

/*! @name PORTC2 (number 39), U23[3]/J4[6]/UART1_RX
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                                        /* @} */

/*! @name PORTC3 (number 40), U23[4]/J4[5]/UART1_TX
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PIN 3U                   /*!<@brief PORT pin number */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                                                        /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDEBUG_UARTPins(void);

/*! @name PORTC1 (number 38), U12[4]/J2[10]/J13[5]/U27[1]/I2C1_SDA
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITBUTTONSPINS_SW2_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW2_GPIO_PIN_MASK (1U << 1U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITBUTTONSPINS_SW2_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW2_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_INITBUTTONSPINS_SW2_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name PORTC7 (number 45), U11[1]/J6[10]/WUU0_P12
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITBUTTONSPINS_SW3_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW3_GPIO_PIN_MASK (1U << 7U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITBUTTONSPINS_SW3_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW3_PIN 7U                   /*!<@brief PORT pin number */
#define BOARD_INITBUTTONSPINS_SW3_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name PORTA4 (number 10), JP25[3]/J4[4]/U18[12]/SW4/SWO/BOOT_CFG
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITBUTTONSPINS_SW4_GPIO GPIOA               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW4_GPIO_PIN_MASK (1U << 4U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITBUTTONSPINS_SW4_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW4_PIN 4U                   /*!<@brief PORT pin number */
#define BOARD_INITBUTTONSPINS_SW4_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitButtonsPins(void);

/*! @name PORTC5 (number 43), U5[4]/J1[4]/CAN0_RX
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITCANPINS_CAN_RX_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITCANPINS_CAN_RX_PIN 5U                   /*!<@brief PORT pin number */
#define BOARD_INITCANPINS_CAN_RX_PIN_MASK (1U << 5U)      /*!<@brief PORT pin mask */
                                                          /* @} */

/*! @name PORTC4 (number 42), U8[4]/J1[3]/J13[1]/CAN0_TX
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITCANPINS_CAN_TX_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITCANPINS_CAN_TX_PIN 4U                   /*!<@brief PORT pin number */
#define BOARD_INITCANPINS_CAN_TX_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                                          /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitCANPins(void);

/*! @name PORTB1 (number 47), U4[2]/J2[5]/J5[9]/J12[5]/U24[4]/LPSPI1_SIN
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITFLASHPINS_FLASH_SIN_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITFLASHPINS_FLASH_SIN_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_INITFLASHPINS_FLASH_SIN_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*! @name PORTB3 (number 1), U4[5]/J2[4]/J5[7]/J12[6]/U24[5]/R143/LPSPI1_SOUT
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITFLASHPINS_FLASH_SOUT_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITFLASHPINS_FLASH_SOUT_PIN 3U                   /*!<@brief PORT pin number */
#define BOARD_INITFLASHPINS_FLASH_SOUT_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                                                /* @} */

/*! @name PORTB0 (number 46), U4[1]/Q2[1]/J1[6]/LPSPI1_PCS0/TPM1_CH0
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITFLASHPINS_FLASH_CS_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITFLASHPINS_FLASH_CS_PIN 0U                   /*!<@brief PORT pin number */
#define BOARD_INITFLASHPINS_FLASH_CS_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PORTB2 (number 48), U4[6]/J2[6]/J5[11]/J12[4]/U24[3]/LPSPI1_SK
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITFLASHPINS_FLASH_SCK_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITFLASHPINS_FLASH_SCK_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_INITFLASHPINS_FLASH_SCK_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*! @name PORTB4 (number 2), U4[7]/J2[3]/J12[3]/U24[6]/R146/LPSPI1_PCS3
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITFLASHPINS_FLASH_RST_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITFLASHPINS_FLASH_RST_GPIO_PIN_MASK (1U << 4U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITFLASHPINS_FLASH_RST_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITFLASHPINS_FLASH_RST_PIN 4U                   /*!<@brief PORT pin number */
#define BOARD_INITFLASHPINS_FLASH_RST_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitFlashPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/