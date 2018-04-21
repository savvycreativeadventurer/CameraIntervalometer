
int CameraFocusPin=9;
int CameraShutterPin=10;
int CameraShutterDelay=250;
int CameraShutterTriggerDelay=250;
int CameraShutterCount=10;

void setup() {
  pinMode(CameraShutterPin,OUTPUT);
  pinMode(CameraFocusPin,OUTPUT);
}

void loop() {
  for (int j=0; j<=CameraShutterCount; j=j+1){
  digitalWrite(CameraShutterPin,HIGH);
  delay (CameraShutterDelay);
  digitalWrite(CameraShutterPin,LOW);
  delay (CameraShutterTriggerDelay);
  }
}
