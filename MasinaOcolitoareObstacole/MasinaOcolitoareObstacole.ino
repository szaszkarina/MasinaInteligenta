#include <NewPing.h>                   
#define trig 12                        
#define echo 11                        
#define maxd 250                       
int uS;                               
float i=uS;
/* motorul A */
int enA = 9;                          
int in1 = 5;                           
int in2 = 4;                           
/* motorul B */
int enB = 6;                           
int in3 = 3;                           
int in4 = 2;                           
int ledverde = 13;                     
int ledrosu = 10;                       
NewPing sonar(trig, echo, maxd);       



void setup(){                          
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  Serial.begin(115200);}               



void loop(){                            
  delay(50);                           
  unsigned int uS = sonar.ping_cm();   
  Serial.print("Distanta: ");          
  Serial.print(uS );                                                                   
  Serial.println("cm");                                                                                                            
 
      if(uS<40)                          
       {digitalWrite(in1, HIGH);            
        digitalWrite(in2, LOW);                         
        analogWrite(enA,100);               
        digitalWrite(in3, HIGH);             
        digitalWrite(in4, LOW);
        analogWrite(enB, 100);}              
        
        else{                                                       
                                             
          digitalWrite(in1, LOW);                                                                                 
          digitalWrite(in2, HIGH);                                                   
          analogWrite(enA, 100);                                          
                                             
          digitalWrite(in3, HIGH);                                                                                          
          digitalWrite(in4, LOW);           
          analogWrite(enB, 100);}                                                                                                 
          
      
      
}
