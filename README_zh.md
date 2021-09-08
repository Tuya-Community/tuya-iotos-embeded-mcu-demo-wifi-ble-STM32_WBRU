# Tuya IoTOS Embedded Mcu Demo Wifi Ble STM32_WBRU

[English](./README.md) | [中文](./README_zh.md)

## 简介 

本Demo通过STM32G070CBT6，涂鸦智能云平台、涂鸦智能APP和IoTOS Embeded MCU SDK实现控制LED的亮灭。

已实现功能包括：

+ APP远程控制灯的亮灭

  



## 快速上手 

### 编译与烧录
+ 下载Tuya IoTOS嵌入式代码

+ 执行Project.uvprojx文件

+ 点击软件中的编译，并完成下载


### 文件介绍 

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



### Demo入口

入口文件：main.c

重要函数：main()

+ 对mcu的USART等进行初始化配置，所有事件在while(1)中轮询判断。




### DP点相关

+ mcu获取bool型下发dp值:mcu_get_dp_download_bool()

| 函数名  | unsigned char mcu_get_dp_download_bool(const unsigned char value[],unsigned short len) |
| :------ | ------------------------------------------------------------ |
| value[] | dp数据缓冲区地址                                             |
| len     | dp数据长度                                                   |
| Return  | 当前dp值                                                     |

### I/O 列表 

| 配网按键IO口 | 配网指示灯IO口 | APP控制LED |  USART1  | USART2  |
| :----------: | :------------: | :--------: | :------: | :-----: |
|     PA8      |      PA15      |    PC6     | PA9 TXD  | PA2 TXD |
| 外接一个按键 | 外接一个指示灯 | 开发板自带 | PA10 RXD | PA3 RXD |

## 相关文档

涂鸦Demo中心：https://developer.tuya.com/demo



## 技术支持

您可以通过以下方法获得涂鸦的支持:

- 开发者中心：https://developer.tuya.com
- 帮助中心: https://support.tuya.com/help
- 技术支持工单中心: [https://service.console.tuya.com](https://service.console.tuya.com/) 

