char t;
int enA = 9;
int enB = 6;

void setup() {

pinMode(5,OUTPUT);   
pinMode(4,OUTPUT);   
pinMode(2,OUTPUT);   
pinMode(3,OUTPUT);   
pinMode(enA, OUTPUT);
pinMode(enB, OUTPUT);
Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(t == '1'){            
   analogWrite(enA,100);  
  analogWrite(enB,100);  
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
}
 
else if(t == '2'){      
   analogWrite(enA,100);  
  analogWrite(enB,100);  
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
}
else if(t == '3'){   
 
  analogWrite(enA,100);  
  analogWrite(enB,100);  
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
}
 
else if(t == '4'){      
   analogWrite(enA,100);  
  analogWrite(enB,100);  
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
}
 
else if(t == '5'){      
   analogWrite(enA,100);  
  analogWrite(enB,100);  
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
}

delay(100);
}
