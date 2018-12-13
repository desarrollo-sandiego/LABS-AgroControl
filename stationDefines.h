/* Automatic Control Parameters Definition */
#define DRY_SOIL      20
#define WET_SOIL      45
#define COLD_TEMP     12
#define HOT_TEMP      26
#define TIME_PUMP_ON  30
#define TIME_LAMP_ON  15

/* TIMER */
#define READ_BUTTONS_TM   1L  // definitions in seconds
#define READ_SOIL_TEMP_TM 20L
#define READ_SOIL_HUM_TM  20L
#define READ_AIR_DATA_TM  20L
#define SEND_UP_DATA_TM   180L
#define AUTO_CTRL_TM      180L     

/* OLED */
boolean turnOffOLED = 1;
#define SHOW_SET_UP   30

/* DHT22*/
#define DHTPIN D3  
#define DHTTYPE DHT22 
float airHum = 0;
float airTemp = 0;

/* Soil Moister */
#define soilMoisterPin A0
#define soilMoisterVcc D8
int soilMoister = 0;

/* DS18B20 Temperature Sensor */
#define ONE_WIRE_BUS 14 // DS18B20 on NodeMCU pin D5 corresponds to GPIO 014 on Arduino
float soilTemp;

/* Relays */
#define PUMP_PIN D6              //PUMP (Red LED)
#define LAMP_PIN D7              //LAMP (Green LED)
boolean pumpStatus = 0;
boolean lampStatus = 0;

/* Buttons */
#define PUMP_ON_BUTTON D9        //push-button PUMP (Red)
#define LAMP_ON_BUTTON D10       //push-button LAMP (Green)
#define SENSORS_READ_BUTTON D4   //push-button SENSOR (yellow)
