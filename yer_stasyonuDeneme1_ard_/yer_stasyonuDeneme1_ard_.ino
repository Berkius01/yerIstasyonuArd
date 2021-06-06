void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
String telemetri="";
float randomNumber;
int j=1;
void loop() {
  // put your main code here, to run repeatedly:

  telemetri+=";";
  
  randomNumber = random(10,20)/10.0;
  telemetri+=randomNumber*j;
  telemetri+=";";
  
  randomNumber = random(10,20)/10.0;
  telemetri+=randomNumber*j;
  telemetri+=";";

  randomNumber = random(10,20)/10.0;
  telemetri+=randomNumber*j;
  telemetri+=";";

  randomNumber = random(10,20)/10.0;
  telemetri+=randomNumber*j;
  telemetri+=";";

  randomNumber = random(10,20)/10.0;
  telemetri+=randomNumber*j;
  telemetri+=";";

  randomNumber = random(10,20)/10.0;
  telemetri+=randomNumber*j;
  
  Serial.println(telemetri);
  telemetri="";
  j++;
  delay(1000);
}
