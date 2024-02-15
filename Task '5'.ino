int in1=2;
int in2=3;
int in3=4;
int in4=5;

char t;
void setup()
{
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

  
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available())
  {
    t=Serial.read();
    Serial.print(t);
  }
  if (t=='F'){
  digitalWrite(in1,1);
  digitalWrite(in2,0);
  digitalWrite(in3,1);
  digitalWrite(in4,0); }
  else if (t=='B'){
  digitalWrite(in1,0);
  digitalWrite(in2,1);
  digitalWrite(in3,0);
  digitalWrite(in4,1); }
  else if (t=='L'){
  digitalWrite(in1,0);
  digitalWrite(in2,0);
  digitalWrite(in3,1);
  digitalWrite(in4,0); }
  else if (t=='R'){
  digitalWrite(in1,1);
  digitalWrite(in2,0);
  digitalWrite(in3,0);
  digitalWrite(in4,0); }
  else if (t=='S'){
  digitalWrite(in1,0);
  digitalWrite(in2,0);
  digitalWrite(in3,0);
  digitalWrite(in4,0); }
}
