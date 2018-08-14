int senalOjo=A0;
int lecturaOjo=0;

void setup() 
{
Serial.begin(9600);
pinMode(senalOjo,INPUT);
pinMode(9,OUTPUT);
}

void loop() 
{
lecturaOjo=analogRead(senalOjo);
Serial.print(lecturaOjo);
Serial.print(",");
Serial.print(700);
Serial.print(",");
Serial.println(000);
if(lecturaOjo>=750)
{
digitalWrite(9,HIGH);
delay(10);
}
else
{digitalWrite(9,LOW);
delay(10);
}

delay(20);
}
