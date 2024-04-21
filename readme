This is a Lora Shield for the Lilygo Mini Epaper Core 1.05". 
With this shield you may enable LoRa Communication, Chirpstack or stupid Helium on a Lilygo Mini Epaper Core ESP32 (Not the S3 for now)

In the Attached folder you may find

Schematic(PDF)
Gerber Files(Zip File)
Demofiles for reading out a Bresser Weather Station
Changes in the SW for https://github.com/mcci-catena/arduino-lmic
You may change the following lines in the SW of Arduino-LMIC: To do this Change in the folder Arduino\libraries\arduino-lmic-master\src\hal the File hal.cpp the function "static void hal_spi_init to": static void hal_spi_init () { //SPI.begin();//Comment Uspizig Original und WEMOS D1 //SPI.begin(lmic_pins.sck, lmic_pins.miso, lmic_pins.mosi, lmic_pins_cs); //sck, miso, mosi, cs SPI.begin(23, 22, 19, 33);//Comment Uspizig M5Matrix Lora Modul }

Part List/BOM: SMD-Stiftleiste: SMD RM2.54 z.B. https://www.conrad.de/de/p/fischer-elektronik-stiftleiste-standard-anzahl-reihen-1-polzahl-je-reihe-20-sl-10-smd-062-20-z-1-st-739077.html

MBR0530-SOD123: D1, D2, D3 -> Anode towards RFM95 DIO0, DIO1, DIO2 Kathode direction to D4, R1 https://www.conrad.de/de/p/mbr-0530-t1g-diode-schottky-smd-0-5a-30v-sod123-inhalt-50-stueck-800112525.html

0805 Resistor 4k7 or 10k or 1k PullDown Resistor-> R2 Choose whatever you have availible in Kohm.

RFM95 Lora TTN Module: https://www.conrad.de/de/p/rfm95w-868-s2-lora-module-868mhz-20-123dbm-300kbps-1-8-3-7v-800167586.html

Wire as a Antenna L = 3 x 10^8 m/s : 868 MHz : 4 = 86,3 mm

Optional: C1 100nF 0805 C2 1µF 0805
