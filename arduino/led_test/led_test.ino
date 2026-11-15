// Module 1 - Test A : validation du câblage des 5 LED (chenillard)

const uint8_t LED_PINS[5] = {2, 3, 4, 5, 6};  // THU, IND, MID, RIN, PNK
const uint8_t NB_LEDS = 5;

void setup() {
  for (uint8_t i = 0; i < NB_LEDS; i++) {
    pinMode(LED_PINS[i], OUTPUT);
    digitalWrite(LED_PINS[i], LOW);
  }
}

void loop() {
  // 1) Allumage une par une, du pouce à l'auriculaire
  for (uint8_t i = 0; i < NB_LEDS; i++) {
    digitalWrite(LED_PINS[i], HIGH);
    delay(400);
    digitalWrite(LED_PINS[i], LOW);
  }
  // 2) Toutes allumées 1 s, puis pause
  for (uint8_t i = 0; i < NB_LEDS; i++) digitalWrite(LED_PINS[i], HIGH);
  delay(1000);
  for (uint8_t i = 0; i < NB_LEDS; i++) digitalWrite(LED_PINS[i], LOW);
  delay(600);
}