#ifndef _LD3320_CONFIG_H__
#define _LD3320_CONFIG_H__

///识别码（客户修改处）
#define CODE_LSD	1	 //流水灯
#define CODE_SS	  2	 //闪烁
#define CODE_AJCF	3	 //按键触发
#define CODE_QM	  4	 //全灭
#define CODE_JT		5  //状态


#define LED1_ON()								GPIO_SetBits(GPIOF,GPIO_Pin_6)
#define LED2_ON()								GPIO_SetBits(GPIOF,GPIO_Pin_7)
#define LED3_ON()								GPIO_SetBits(GPIOF,GPIO_Pin_8)
#define LED4_ON()								GPIO_SetBits(GPIOF,GPIO_Pin_9)

#define LED1_OFF()							GPIO_ResetBits(GPIOF,GPIO_Pin_6)
#define LED2_OFF()							GPIO_ResetBits(GPIOF,GPIO_Pin_7)
#define LED3_OFF()							GPIO_ResetBits(GPIOF,GPIO_Pin_8)
#define LED4_OFF()							GPIO_ResetBits(GPIOF,GPIO_Pin_9)

///LD3320引脚相关定义
#define LD3320RST_PIN			GPIO_PIN_0
#define LD3320RST_GPIO_PORT		GPIOB
//#define LD3320RST_GPIO_CLK		RCC_APB2Periph_GPIOB
#define LD_RST_H() 				HAL_GPIO_WritePin(LD3320RST_GPIO_PORT, LD3320RST_PIN, GPIO_PIN_SET)
#define LD_RST_L() 				HAL_GPIO_WritePin(LD3320RST_GPIO_PORT, LD3320RST_PIN, GPIO_PIN_RESET)

#define LD3320CS_PIN			GPIO_PIN_2		
#define LD3320CS_GPIO_PORT		GPIOA
//#define LD3320CS_GPIO_CLK			RCC_APB2Periph_GPIOA
#define LD_CS_H()				HAL_GPIO_WritePin(LD3320CS_GPIO_PORT, LD3320CS_PIN, GPIO_PIN_SET)
#define LD_CS_L()				HAL_GPIO_WritePin(LD3320CS_GPIO_PORT, LD3320CS_PIN, GPIO_PIN_RESET)

#define LD3320IRQ_GPIO_CLK		RCC_APB2Periph_GPIOB
#define LD3320IRQ_PIN			GPIO_PIN_10
#define LD3320IRQ_GPIO_PORT		GPIOB
#define LD3320IRQEXIT_PORTSOURCE		GPIO_PortSourceGPIOB
#define LD3320IRQPINSOURCE		GPIO_PinSource12
#define LD3320IRQEXITLINE			EXTI_Line12
#define LD3320IRQN						EXTI15_10_IRQn

#define LD3320WR_PIN			GPIO_PIN_1
#define LD3320WR_GPIO_PORT		GPIOB
//#define LD3320WR_GPIO_CLK			RCC_APB2Periph_GPIOB
#define LD_SPIS_H()  			HAL_GPIO_WritePin(LD3320WR_GPIO_PORT, LD3320WR_PIN, GPIO_PIN_SET)
#define LD_SPIS_L()  			HAL_GPIO_WritePin(LD3320WR_GPIO_PORT, LD3320WR_PIN, GPIO_PIN_RESET)

/*
#define	LD3320SPI							SPI1
#define LD3320SPI_CLK					RCC_APB2Periph_SPI1	

#define LD3320SPIMISO_PIN					GPIO_Pin_6
#define LD3320SPIMISO_GPIO_PORT		GPIOA
#define LD3320SPIMISO_GPIO_CLK		RCC_APB2Periph_GPIOA

#define LD3320SPIMOSI_PIN					GPIO_Pin_7
#define LD3320SPIMOSI_GPIO_PORT		GPIOA
#define LD3320SPIMOSI_GPIO_CLK		RCC_APB2Periph_GPIOA

#define LD3320SPISCK_PIN					GPIO_Pin_5
#define LD3320SPISCK_GPIO_PORT		GPIOA
#define LD3320SPISCK_GPIO_CLK			RCC_APB2Periph_GPIOA

*/

/** @addtogroup STM32F4_DISCOVERY_LOW_LEVEL_BUS
  * @{
  */  

/*##################### SPI1 ###################################*/
#define DISCOVERY_SPIx                              SPI1
#define DISCOVERY_SPIx_CLK_ENABLE()                 __SPI1_CLK_ENABLE()
#define DISCOVERY_SPIx_GPIO_PORT                    GPIOA                      /* GPIOA */
#define DISCOVERY_SPIx_AF                           GPIO_AF5_SPI1
#define DISCOVERY_SPIx_GPIO_CLK_ENABLE()            __GPIOA_CLK_ENABLE()
#define DISCOVERY_SPIx_GPIO_CLK_DISABLE()           __GPIOA_CLK_DISABLE()
#define DISCOVERY_SPIx_SCK_PIN                      GPIO_PIN_5                 /* PA.05 */
#define DISCOVERY_SPIx_MISO_PIN                     GPIO_PIN_6                 /* PA.06 */
#define DISCOVERY_SPIx_MOSI_PIN                     GPIO_PIN_7                 /* PA.07 */
	
	/* Maximum Timeout values for flags waiting loops. These timeouts are not based
	   on accurate values, they just guarantee that the application will not remain
	   stuck if the SPI communication is corrupted.
	   You may modify these timeout values depending on CPU frequency and application
	   conditions (interrupts routines ...). */   
#define SPIx_TIMEOUT_MAX                            0x1000 /*<! The value of the maximal timeout for BUS waiting loops */
	



#endif
