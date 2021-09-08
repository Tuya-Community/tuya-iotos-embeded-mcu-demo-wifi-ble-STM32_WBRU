# Tuya IoTOS Embedded Mcu Demo Wifi Ble STM32_WBRU

[English](./README.md) | [中文](./README_zh.md)

## Introduction  

The Demo uses STM32G070CBT6, tuya Smart cloud platform, tuya Smart APP and IoTOS Embeded MCU SDK to control LED on and off.  

The implemented features include:

+ APP remotely controls light on and off


## Quick start  

### Compile & Burn
+ Download Tuya IoTOS Embeded Code
+ Execute the Project.uvprojx file
+ Click Compile in the software and complete the download


### File introduction 

```
├── Src
    │   ├── main.c
    │   ├── gpio.c
    │   ├── usart.c
    │   ├── stm32g0xx_it.c
    │   ├── stm32g0xx_hal_msp.c
    │   ├── connect_wifi.c
 ├── Inc 
    │   ├── main.h
    │   ├── gpio.h
    │   ├── usart.h
    │   ├── stm32g0xx_it.h
    │   ├── stm32g0xx_hal_conf.h
    │   ├── connect_wifi.h
 ├── Drivers
    ├── CMSIS
        ├── Device
           ├──ST
              ├──STM32G0xx
        ├── Include              
    ├── STM32G0xx_HAL_Driver
        ├── Inc
        ├── Src
└── mcu_sdk
    ├── mcu_api.c
    ├── mcu_api.h
    ├── protocol.c
    ├── protocol.h
    ├── system.c
    ├── system.h
    └── wifi.h  
```



### Demo entry

Entry file：main.c

Important functions：main()

+ Initialize and configure MCU USART, etc. All events are polled and judged in while(1)。




### DataPoint related

+ MCU gets the dp value of the bool type:mcu_get_dp_download_bool()

| function name | unsigned char mcu_get_dp_download_bool(const unsigned char value[],unsigned short len) |
| ------------- | ------------------------------------------------------------ |
| value[]       | DP data buffer address                                       |
| len           | DP data length                                               |
| Return        | The current values of dp                                     |

### I/O List  

|    IO port with network keys    | Network indicator I/O port |    APP to control the LED    |  USART1  | USART2  |
| :-----------------------------: | :------------------------: | :--------------------------: | :------: | :-----: |
|               PA8               |            PA15            |             PC6              | PA9 TXD  | PA2 TXD |
| An external button is connected |  External indicator light  | Development board comes with | PA10 RXD | PA3 RXD |

## Related Documents

  Tuya Demo Center: https://developer.tuya.com/demo



## Technical Support

  You can get support for Tuya by using the following methods:

- Developer Center: https://developer.tuya.com
- Help Center: https://support.tuya.com/help
- Technical Support Work Order Center: [https://service.console.tuya.com](https://service.console.tuya.com/) 

