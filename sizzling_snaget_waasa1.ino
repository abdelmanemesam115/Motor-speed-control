void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(12,INPUT);
  pinMode(7,OUTPUT);
  
}
void loop() {
  // put your main code here, to run repeatedly:
long t=0,d=0;
digitalWrite(13,0);
delayMicroseconds(2);
 digitalWrite(13,1);
 delayMicroseconds(10);
 digitalWrite(13,0);
 t=pulseIn(12,1);
 d=.0343*(t/2);
 Serial.println(d);
   if (d<50){
  analogWrite(7,500);
  }

  else if (d<100){
  analogWrite(7,400);
   } 

  else if (d<150){
  analogWrite(7,300);
   } 
   else if (d<200){
  analogWrite(7,200);
   } 
}