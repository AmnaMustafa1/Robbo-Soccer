int enaa=5;
int enab=6;
int in1=7;
int in2=8;
int in3=9;
int in4=10;
char t;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(enaa,OUTPUT);
pinMode(enab,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()){
t = Serial.read();
Serial.println(t);
}
if(t == 'F'){
  analogWrite(enaa,180);
  digitalWrite(in1,0);
  digitalWrite(in2,1);
  analogWrite(enab,180);
  digitalWrite(in3,0);
  digitalWrite(in4,1);
}
else if(t == 'B'){      
   analogWrite(enaa,180);
  digitalWrite(in1,1);
  digitalWrite(in2,0);
  analogWrite(enab,180);
  digitalWrite(in3,1);
  digitalWrite(in4,0);
}
  
else if(t == 'L'){      
  analogWrite(enaa,100);
  digitalWrite(in1,0);
  digitalWrite(in2,1);
  analogWrite(enab,180);
  digitalWrite(in3,0);
  digitalWrite(in4,1);
}
 
else  if(t == 'R'){     
   analogWrite(enaa,180);
  digitalWrite(in1,0);
  digitalWrite(in2,1);
  analogWrite(enab,100);
  digitalWrite(in3,0);
  digitalWrite(in4,1);
}
else{
   analogWrite(enaa,0);
    analogWrite(enab,0);
  }
}
