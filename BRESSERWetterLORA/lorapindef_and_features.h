
#define LORA_TX_INIT 0
#define LORA_TX_JOINING 1
#define LORA_TX_JOINED 2
#define LORA_TX_STARTED 3
#define LORA_TX_COMPLETED 4



// Pinning

#ifdef geraet11 //TTGO Mini Epaper Core 1.02" inch screen // WETTER 02 in Wildwetter
//Check here your Version and Pinnings
  #define TTGOT5 1 //neded to indicate the E-INK Library a different pinning
  #define E_INK_PIN_SPI_BUSY 34
  #define E_INK_PIN_SPI_RST  4
  #define E_INK_PIN_SPI_DC   19
  #define E_INK_PIN_SPI_CS   5//13
  #define E_INK_PIN_SPI_DIN  21
  #define E_INK_PIN_SPI_SCK  22 
  #define E_INK_PIN_SPI_MISO -1//24//n/A

//Lora Pinning for ESP32 Base Board with Bresser Weather Station
  #define LORA_PIN_SPI_MOSI 18
  #define LORA_PIN_SPI_MISO 38
  #define LORA_PIN_SPI_SCK  32
  #define LORA_PIN_SPI_NSS  12  
  #define LORA_PIN_SPI_RST  23//27   
  #define LORA_PIN_SPI_DIO1 33
  #define LORA_PIN_SPI_DIO0 33

  #define SDCARD_CS               (13)
  #define SDCARD_MOSI             (15)
  #define SDCARD_MISO             (2)
  #define SDCARD_SCLK             (14)


//CC1101 Connections
  #define CC_MOSI 21
  #define CC_SCK 22
  #define CC_MISO 10
  #define CC_GD2 9
  #define CC_GD0 4
  #define CC_CS  2
  //LSB LSB MSB
  #define APP_EUI_LORA FILLMEIN
  #define DEV_EUI_LORA FILLMEIN
  #define APP_KEY_LORA FILLMEIN
#endif

//EEPROM HASH für Joins OTAA gegen die geprüft wird

// WETTER 02 in Wildwetter
#ifdef geraet11 
  #define DATAVALID 0xACF2AFC2                     // Pattern for data valid in EEPROM/RTC memory
#endif

// Features


#ifdef geraet11 //ESP32 TTGO LORA 32 V1.6
  #define TIME_TO_SLEEP  100        /* Time ESP32 will go to sleep (in seconds) */
  const unsigned TX_INTERVAL = 40; //180 TX Interval in Seconds
  //#define SSD1306_DISPLAY
  #define EINKDISPLAY102TTGO
  //#define CC1101_CONNECTED
  #define RFM95_WEATHER_DECODER
  #define WIFISCAN_CONNECTED
  //#define OTAWIFI_ENABLED
  //#define BME280_CONNECTED
  //#define BME_ADRESS 0x77
  //#define CCS811_CONNECTED
  //#define CCS811_ADRESS 0x5A
  #define ANZAHL_LEDS 1//36
  #define RGB_LED_DATA_PIN 0
  
  #define OBEN_LED_DATA_PIN 27
  #define OBEN_LEDS 1
  //#define SK6812_LEDS
  //#define WS2812_LEDS
  
#endif
