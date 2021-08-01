int in=A0;
void setup() {
Serial.begin(9600);
pinMode(10, INPUT); // Setup for leads off detection LO +
pinMode(11, INPUT); // Setup for leads off detection LO -
pinMode(in,INPUT); 
}
 
void loop() {
 
if((digitalRead(10) == 1)||(digitalRead(11) == 1)){
Serial.println('!');
}
else{
// send the value of analog input 0:
Serial.print("#");
Serial.println(analogRead(A0));
//byte val = map(analogRead(A0),0,1024.0,0,255);
//Serial.write(val);
//Serial.println(val);
}
//Wait for a bit to keep serial data from saturating
delay(10);
}
