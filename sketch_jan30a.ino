const int leds[] = {4, 5, 18, 19, 21, 22, 23, 25};
const int N = sizeof(leds) / sizeof(leds[0]);

int delayMs = 120;

void setup(){
  for(int i = 0; i< N; i++){
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
}


void loop(){
  for(int i = 0; i < N; i++){
    digitalWrite(leds[i], HIGH);
    delay(delayMs);
    digitalWrite(leds[i], LOW);
  }

  for(int i = N - 2; i >= 1 ; i--){
    digitalWrite(leds[i], HIGH);
    delay(delayMs);
    digitalWrite(leds[i], LOW);
  }
}