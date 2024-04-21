// Select appropriate sensor message format
//#define BRESSER_5_IN_1
#define BRESSER_6_IN_1

// Select type of receiver module
// (RFM95W: USE_SX1276)
//#define USE_CC1101
#define USE_SX1276

#define _DEBUG_MODE_

// Arduino default SPI pins
//
// Board   SCK   MOSI  MISO
// ESP8266 D5    D7    D6
// ESP32   D18   D23   D19

#if defined(ESP32)
/*    
	//PICO D4 Board
    #define PIN_RECEIVER_CS   5
    #define PIN_RECEIVER_IRQ  27     // CC1101: GDO0 / RFM95W/SX127x: G0
    #define PIN_RECEIVER_GPIO 25     // CC1101: GDO2 / RFM95W/SX127x: G1
    #define PIN_RECEIVER_RST  14     // RFM95W/SX127x - GPIOxx / CC1101 - RADIOLIB_NC

    #define CC_MOSI 23
    #define CC_SCK 18
    #define CC_MISO 19
*/   

 // LilyGo TTGO LORA32 V2.1.6
/*
    #define PIN_RECEIVER_CS   18
    #define PIN_RECEIVER_IRQ  26 // CC1101: GDO0 / RFM95W/SX127x: G0
    #define PIN_RECEIVER_GPIO 12 // CC1101: GDO2 / RFM95W/SX127x: G1
    #define PIN_RECEIVER_RST  23 // RFM95W/SX127x - GPIOxx / CC1101 - RADIOLIB_NC

    #define CC_MOSI 27
    #define CC_SCK 5
    #define CC_MISO 19
*/
// TTGO MINI E-Paper Core 1.02 " EINK Display

/*

    #define PIN_RECEIVER_CS   12
    #define PIN_RECEIVER_IRQ  33 // CC1101: GDO0 / RFM95W/SX127x: G0
    #define PIN_RECEIVER_GPIO -1//12 // CC1101: GDO2 / RFM95W/SX127x: G1//
    #define PIN_RECEIVER_RST  23 // RFM95W/SX127x - GPIOxx / CC1101 - RADIOLIB_NC

    #define CC_MOSI 18
    #define CC_SCK 32
    #define CC_MISO 38



*/
//M5Stack Atom Matrix mit Lora Aufsteck Board
/*
    #define PIN_RECEIVER_CS   33
    #define PIN_RECEIVER_IRQ  21 // CC1101: GDO0 / RFM95W/SX127x: G0
    #define PIN_RECEIVER_GPIO 21//12 // CC1101: GDO2 / RFM95W/SX127x: G1//
    #define PIN_RECEIVER_RST  25 // RFM95W/SX127x - GPIOxx / CC1101 - RADIOLIB_NC

    #define CC_MOSI 19
    #define CC_SCK 23
    #define CC_MISO 22
*/
//M5Stack Atom S3 mit Lora Aufsteck Board
    #define PIN_RECEIVER_CS   8
    #define PIN_RECEIVER_IRQ  39 // CC1101: GDO0 / RFM95W/SX127x: G0
    #define PIN_RECEIVER_GPIO -1//12 // CC1101: GDO2 / RFM95W/SX127x: G1//
    #define PIN_RECEIVER_RST  38 // RFM95W/SX127x - GPIOxx / CC1101 - RADIOLIB_NC

    #define CC_MOSI 6
    #define CC_SCK 7
    #define CC_MISO 5


    
#elif defined(ESP8266)
    #define PIN_RECEIVER_CS   15
    
    // CC1101: GDO0 / RFM95W/SX127x: G0
    #define PIN_RECEIVER_IRQ  4 
    
    // CC1101: GDO2 / RFM95W/SX127x: 
    #define PIN_RECEIVER_GPIO 5 
    
    // RFM95W/SX127x - GPIOxx / CC1101 - RADIOLIB_NC
    #define PIN_RECEIVER_RST  2
#endif