//Code Written By RAJDEEP BARUAH

char str[2],i;
void setup() {
  Serial.begin(9600);

}

void loop() {
  while(Serial.available())
  {
    char ch=Serial.read();
    str[i++]=ch;
    Serial.println(ch);
  }

}
