


#include <EmonLib.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
    
    // put your main code here, to run repeatedly:
    float CompInletTemp = random(-210,-190)/10.0;         //Compressor inlet suction temp
    float CompOutletTemp = random(1760,1830)/10.0;        //compressor outlet temp
    float CondOutletTemp = random(980,1020)/10.0;        //Condenser outlet temp
    float ExpansionOutletTemp = CompInletTemp + 1;        //Condenser outlet temp

    float ReturnAirTemp = random(690,710)/10.0;        //Condenser outlet temp
    float DischargeAirTemp = random(-110,-990)/10.0;        //Condenser outlet temp

    float ReturnAirH = random(760,790)/10.0;          //Condenser outlet temp
    float DischargeAirH = random(550,570)/10.0;        //Condenser outlet temp

        float FanCurrent = random(45,48)/10.0;          //Condenser outlet temp
    float CompCurrent = random(100,110)/10.0;        //Condenser outlet temp
            
    String msg = "{";
    msg = msg + "\"CompInletTemp\":"+ CompInletTemp;
    msg = msg + ",\"CompOutletTemp\":"+ CompOutletTemp;
    msg = msg + ",\"CondOutletTemp\":"+ CondOutletTemp;
    msg = msg + ",\"ExpansionOutletTemp\":"+ ExpansionOutletTemp;
    msg = msg + ",\"ReturnAirTemp\":"+ ReturnAirTemp;
    msg = msg + ",\"DischargeAirTemp\":"+ DischargeAirTemp;
        msg = msg + ",\"FanCurrent\":"+ FanCurrent;
    msg = msg + ",\"CompCurrent\":"+ CompCurrent;
    msg = msg + "}";
    Serial.println(msg);
    delay(1000);
}
