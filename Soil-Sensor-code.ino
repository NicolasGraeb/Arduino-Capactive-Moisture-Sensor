const int air_val=457;//Put sensor in air and check value (Serial.println(Soil_val);)
const int water_val=196;//Put sensor in water and check value(Serial.println(Soil_val);)
int Soil_val=0;//set as int Soil val
int Soil_percent=0;//set as int soil_percent
#define SoilSensor A0//define sensor pin
void setup()
{  
  Serial.begin(9600);//start Serial port
pinMode(SoilSensor,INPUT);//set sensor as Input
}

void loop() 
{ 
  Soil_val=analogRead(SoilSensor);//read values from analog pin A0 (SoilSensor)
  //Serial.println(Soil_val);//only for first step to calibrate sensor(air and water values)
  Soil_percent=map(Soil_val,water_val,air_val,0,100);//map function re-maps a number from low to high to another values. For example if sennsor is in air value is 457 .Serial port will print 100% 
  if(Soil_percent>=100){
Soil_percent=100;
    
  }
 Serial.println(Soil_percent);//print our percent value on Serial monitor
 Serial.print("%")
  delay(2000);
}
