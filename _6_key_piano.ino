//int buttons[];
//buttons[0]=2;

float notes[]={392.00,440.00,493.88,523.25,587.33, 659.25};
float play[]={3,4,5,3,4,5,5,5,5,5,4,4,4,4,3,4,5};
int i = 0;
void setup() {
Serial.begin(9600);
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
pinMode(3, OUTPUT);

}

void loop() {
int keyVal = analogRead(A0);
Serial.println(keyVal);
if(i>16){
 i=0; 
 }
digitalWrite(play[i], HIGH);
Serial.println(i);
 
if(keyVal == 1023){
  tone(8, notes[0]);
  digitalWrite(play[i], LOW);
  delay(500);
  i++;
}else if(keyVal >= 990 && keyVal <= 1010) {
  tone(8, notes[3]);
  digitalWrite(play[i], LOW);
  delay(500);
  i++;  
}else if(keyVal >= 505 && keyVal <= 515) {
  tone(8, notes[2]);
  digitalWrite(play[i], LOW);
  delay(500);
  i++; 
}else if(keyVal>=5 && keyVal <=10) {
  tone(8, notes[1]);
  digitalWrite(play[i], LOW);
  delay(500);
  i++;
}else if(keyVal>=965 && keyVal <=976){
  tone(8, notes[4]);
  digitalWrite(play[i], LOW);
  delay(500);
  i++;
} else if(keyVal>=690 && keyVal <=780) {
  tone(8,notes[5]);
  digitalWrite(play[i], LOW);
  delay(500);
  i++;
}else{
  noTone(8); 
}
 
 }
