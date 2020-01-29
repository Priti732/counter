int s1=5,s2=6,led=7;
int max=5,n=0;
int i;
void setup() {
  
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
 }

void loop() {
while(n<=max)
{
 if(digitalRead(s1==HIGH))
 { delay(1000);
  while(digitalRead(s2==LOW))
  {
   n++;
   Serial.println("there are ");
   Serial.print(n);
   Serial.println(" people in the room after a person has entered");
   i=255/(max+1-n);
   analogWrite(led,i);
   }
 }
if(digitalRead(s2==HIGH))
 {delay(1000);
  while(digitalRead(s1==LOW))
  {
    n--;
    Serial.println("there are ");
    Serial.print(n);
    Serial.println(" people in the room after a person has exited");
    i=255/(max+1-n);
    analogWrite(led,i);
   
  }
 }
}
}
