void buttonPress1() {
  int raw = digitalRead(fudge);
  Serial.print(raw);
  if (raw == 1) {
    //mode = (mode + 1)% numMode;
    main1();
    delay(250);
  }

}

void buttonPress2() {
  int raw1 = digitalRead(button2);
  Serial.print(raw1);

  if (raw1 == 1) {
    //mode = (mode + 1) % numMode;
    main2();
    delay(250);
  }
}
void buttonPress3() {
  int raw2 = digitalRead(button3);
  if (raw2 == 1) {
    // mode = (mode + 1) % numMode;
    main3();
    delay(250);
  }
}
void buttonPress4() {
  int raw3 = digitalRead(button4);
  if (raw3 == 1) {
    // mode = (mode + 1) % numMode;
    main4();
    delay(250);
  }
}
void buttonPress5() {
  int raw4 = digitalRead(button5);
  if (raw4 == 1) {
    //mode = (mode + 1) % numMode;
    menu();
    delay(250);
  }
}
