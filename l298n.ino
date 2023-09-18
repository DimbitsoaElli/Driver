 int motorSpeed=0;
int In1=5;
int In2=6;
int ENA1=4;

int In3=8;
int In4=9;
int ENA2=10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(In1,OUTPUT);
  pinMode(In2,OUTPUT);
  pinMode(ENA1,OUTPUT);

   pinMode(In3,OUTPUT);
  pinMode(In4,OUTPUT);
  pinMode(ENA2,OUTPUT);
 

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  analogWrite(ENA1,250);
  delay(9000);

  analogWrite(ENA1,0);
  delay(500);


  digitalWrite(In3,HIGH);
  digitalWrite(In4,LOW);
  analogWrite(ENA2,255);
  delay(60000);

  analogWrite(ENA2,0);
  delay(500);




}
