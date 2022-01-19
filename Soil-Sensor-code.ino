const int air_val=457;
const int water_val=196;
int Soil_val=0;
int Soil_percent=0;
#define SoilSensor A0
void setup()
{  
  Serial.begin(9600);
pinMode(SoilSensor,INPUT);
}

void loop() 
{ 
  Soil_val=analogRead(SoilSensor);
  //Serial.println(Soil_val);
  Soil_percent=map(Soil_val,water_val,air_val,0,100);
  if(Soil_percent>=100){
Soil_percent=100;
    
  }
 Serial.println(Soil_percent);
  delay(2000);
}
