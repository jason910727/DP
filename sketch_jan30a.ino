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
  for(int i = 0; i < N; i++){          // 按照 4, 5, 18, 19, 21, 22, 23, 25 順序
    digitalWrite(leds[i], HIGH);       // 打開第i腳位的LED
    delay(delayMs);                    // 120毫秒後
    digitalWrite(leds[i], LOW);        // 關閉第i腳位的LED
  }

  for(int i = N - 2; i >= 1 ; i--){    //同上 只是順序 25, 25, 22, 21, 19, 18, 5, 4 顛倒
    digitalWrite(leds[i], HIGH);
    delay(delayMs);
    digitalWrite(leds[i], LOW);
  }
}
