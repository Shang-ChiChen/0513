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
  pinMode(12,INPUT);
  Serial.begin(9600);
}
int num = 0;
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
int t=1;
int n=1;
void loop() {
/*  n = digitalRead(12);
  if(t==1&&n==0){
    for(int i = 2;i<=12;i++){
    digitalWrite(i,outputMatrix[num][i-2]);
    }
  }else if(t==0&&n==1){
    num++;
    if(num>9)num=0;
  }
  t =n;
  delay(100);*/
  if(digitalRead(12)== 1){
    num++;
    delay(300);
    while(digitalRead(12)== 1);
  }
  num = num%10;
  for(int i = 2;i<=12;i++){
    digitalWrite(i,outputMatrix[num][i-2]);
    }
}
