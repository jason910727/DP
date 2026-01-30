const int leds[] = {4, 5, 18, 19, 21, 22, 23, 25};   // 共8個LED 占八個腳位 這裡的腳位代表ESP32的腳位
const int N = sizeof(leds) / sizeof(leds[0]);

int delayMs = 120;

void setup(){                          // <-設定初始狀態 (全滅)
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
