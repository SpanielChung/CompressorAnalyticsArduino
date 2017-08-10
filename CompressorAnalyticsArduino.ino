


#include <EmonLib.h>

    float  compressorCurrent; 
    float  fanCurrent;                    //pF
    float  returnAirTemp;               //tR
    float  dischargeAirTemp;            //tD
    float  returnAirHumidity;           //rhR
    float  dischargeAirHumidity;        //rhD
    float  suctionTemp;                 //  temp at inlet to compressor
    float  compressionTemp;             //  temp at outlet of compressor
    float  condensorTemp;               //  temp at outlet of condensor
    float  expansionTemp;   

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {

    float  compressorCurrent = random(100,110)/10.0;             
    float  fanCurrent = random(45,48)/10.0;                 
    float  returnAirTemp = random(690,710)/10.0;              
    float  dischargeAirTemp = random(-110,-990)/10.0;        
    float  returnAirHumidity = random(760,790)/10.0;      
    float  dischargeAirHumidity = random(550,570)/10.0;      
    float  suctionTemp = random(-210,-190)/10.0;             
    float  compressionTemp = random(1760,1830)/10.0;         
    float  condensorTemp = random(980,1020)/10.0;            
    float  expansionTemp = suctionTemp + 1;
       
           
    String msg = "{";
    //
    msg = msg + "\"compressorCurrent\":"+ compressorCurrent;
    msg = msg + ",\"fanCurrent\":"+ fanCurrent;
    msg = msg + ",\"returnAirTemp\":"+ returnAirTemp;
    msg = msg + ",\"dischargeAirTemp\":"+ dischargeAirTemp;
    msg = msg + ",\"returnAirHumidity\":"+ returnAirHumidity;
    msg = msg + ",\"dischargeAirHumidity\":"+ dischargeAirHumidity;
    msg = msg + ",\"suctionTemp\":"+ suctionTemp;
    msg = msg + ",\"compressionTemp\":"+ compressionTemp;
    msg = msg + ",\"condensorTemp\":"+ condensorTemp;
    msg = msg + ",\"expansionTemp\":"+ expansionTemp;
    //
    msg = msg + "}";
    Serial.println(msg);
    delay(2000);
}
