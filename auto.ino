void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(12,INPUT_PULLUP);
}
int state = 0;
  byte outputMatrix[10][7]{
    {0,0,0,0,0,0,1},
    {1,0,0,1,1,1,1},
    {0,0,1,0,0,1,0},
    {0,0,0,0,1,1,0},
    {1,0,0,1,1,0,0},
    {0,1,0,0,1,0,0},
    {1,1,0,0,0,0,0},
    {0,0,0,1,1,1,1},
    {0,0,0,0,0,0,0},
    {0,0,0,1,1,0,0},
    };
void loop() {
  // put your main code here, to run repeatedly:
  if(state>9)state=0;
  for(int i = 2;i<=12;i++){
    digitalWrite(i,outputMatrix[state][i-2]);
  }
  digitalWrite(9,1);
  state++;
  delay(500);

}
