//Set pin number
//const won’t change
int led = 2; //the number of the led pin
int led1 = 3; // the number of the led1 pin
int led2 = 4; // the number of the led2 pin
int led3 = 5; // the number of the led3 pin
int led4 = 6; // the number of the led4 pin
int led5 = 7; // the number of the led5 pin
int led6 = 8; // the number of the led6 pin
int led7 = 9; // the number of the led7 pin
int ldr = A5; // the number of the ldr pin
int ir = A0; //initialising analog inputs for sensor1
int ir1 = A1; //initialising analog inputs for sensor2
int ir2 = A2; //initialising analog inputs for sensor3
int ir3 = A3; //initialising analog inputs for sensor4
void setup() 
{
 Serial.begin (9600);
 pinMode (led, OUTPUT); //initialise led as an output
 pinMode (led1,OUTPUT); //initialise led1 as an output
 pinMode (led2,OUTPUT); //initialise led2 as an output
 pinMode (led3,OUTPUT); //initialise led3 as an output
 pinMode (led4,OUTPUT); //initialise led4 as an output
 pinMode (led5,OUTPUT); //initialise led5 as an output
 pinMode (led6,OUTPUT); //initialise led6 as an output
 pinMode (led7,OUTPUT); //initialise led7 as an output
 
 pinMode (ldr,INPUT); // initialise ldr as an input
 
 pinMode (ir,INPUT);
 pinMode (ir1,INPUT);
 pinMode (ir2,INPUT);
 pinMode (ir3,INPUT);
}
void loop() 
{
Serial.println(analogRead(A5));
 int ldrStatus = analogRead (ldr); // read the status of the LDR value
 if (ldrStatus <=500) // check if the LDR status if <=500
 {
 digitalWrite(led, HIGH); // turn led on
 analogWrite(led,255/5); 
 digitalWrite(led1, HIGH);
 analogWrite(led1,255/5);
 
 digitalWrite(led2, HIGH);
 analogWrite(led2,255/5); 
 
 digitalWrite(led3, HIGH);
 analogWrite(led3,255/5); 
 
 digitalWrite(led4, HIGH);
 analogWrite(led4,255/5);
 
 digitalWrite(led5, HIGH);
 analogWrite(led5,255/5);
 digitalWrite(led6, HIGH);
 analogWrite(led6,255/5);
 digitalWrite(led7, HIGH);
 analogWrite(led7,255/5); 
 
 
 if (analogRead(A0)<300) // IR 1 CODE 
 {
 digitalWrite(led,HIGH); //turn led on
 digitalWrite(led1,HIGH); //turn led1 on
 analogWrite(led,255); //led high
 analogWrite(led1,255); 
 delay(1000);// micro second
 } 
 else 
 {
 digitalWrite(led,HIGH);
 digitalWrite(led1,HIGH);
 analogWrite(led,255/5); //dim state
 analogWrite(led1,255/5); 
 
 }
 
 
 if (analogRead(A1)<300) // IR 2 CODE 
 {
 digitalWrite(led2,HIGH);
 digitalWrite(led3,HIGH);
 analogWrite(led2,255);
 analogWrite(led3,255);
 delay(1000);// micro second
 } 
 else 
 {
 digitalWrite(led2,HIGH);
 digitalWrite(led3,HIGH);
 analogWrite(led2,255/5);
 analogWrite(led3,255/5);
 
 
 }
 
 if (analogRead(A2)<300) // IR 3 CODE
 {
 digitalWrite(led4,HIGH);
 digitalWrite(led5,HIGH);
 analogWrite(led4,255);
 analogWrite(led,255); 
 delay(1000);// micro second
 } 
 else 
 {
 digitalWrite(led4,HIGH);
 digitalWrite(led5,HIGH);
 analogWrite(led4,255/5);
 analogWrite(led5,255/5); 
 
 }
 
 if (analogRead(A3)<300) // IR 4 CODE
 {
 digitalWrite(led6,HIGH);
 digitalWrite(led7,HIGH);
 analogWrite(led6,255);
 analogWrite(led7,255); 
 delay(1000);// micro second
 } 
 else 
 {
 digitalWrite(led6,HIGH);
 digitalWrite(led7,HIGH);
 analogWrite(led6,255/5);//dim state
 analogWrite(led7,255/5); 
 
 }
 
 }
 
 else 
 {
 
 digitalWrite(led, LOW); //turn led off
 digitalWrite(led1, LOW); //turn led1 off
 digitalWrite(led2, LOW); //turn led2 off
 digitalWrite(led3, LOW); //turn led3 off
 digitalWrite(led4, LOW); //turn led4 off
 digitalWrite(led5, LOW); //turn led5 off
 digitalWrite(led6, LOW); //turn led6 off
 digitalWrite(led7, LOW); //turn led7 off
 
 }
 
}
