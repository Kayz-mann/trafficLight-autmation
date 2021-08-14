int redLED = 13;
int blueLED = 12;
int redontime = 1000;
int blueontime = 1000;
int redofftime = 100;
int blueofftime = 100;
int numredblinks = 5;
int numblueblinks = 10;
void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (redLED,OUTPUT);
  pinMode (blueLED,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
   for (int j=1; j<numredblinks;j=j+1){
  Serial.println ("the redLED is blinking");
  Serial.println (j);
  digitalWrite  (redLED,HIGH);
  delay (redontime);
  digitalWrite  (blueLED, LOW);
  delay (blueofftime);
   }
   for (int j=1; j<numblueblinks; j=j+1){
    Serial.print (j);
    digitalWrite (redLED,LOW);
    delay (redofftime);
    digitalWrite (blueLED,HIGH);
    delay (blueontime);
   }
    
   
}
