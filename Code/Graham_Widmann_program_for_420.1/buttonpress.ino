void buttonPress() {
  //Serial.print(raw);
  while (digitalRead(3) == LOW) {if(mode != 1) {bitmapDrawn = false; mode = 1;} Keyboard.press(32); letitgo = true;}
  if (letitgo) {Keyboard.release(32); letitgo = false;} //hand
  if (digitalRead(A1) == HIGH) { bitmapDrawn = false; mode = 2; Keyboard.write(80); delay(250);}//penP
  if (digitalRead(2) == HIGH) {bitmapDrawn = false; mode = 3; }//MENU
  if (digitalRead(7) == HIGH) {bitmapDrawn = false; mode = 4; Keyboard.write(66); delay(250);}//brushB
  if (digitalRead(A2) == HIGH) {bitmapDrawn = false; mode = 6; Keyboard.write(86); delay(250);}//moveV 
  if (digitalRead(A0) == HIGH) {bitmapDrawn = false; mode = 5; Keyboard.write(90); delay(250);}//zoom  
}

