void changeBrush() {
  int enc = checkDial();

  if (enc == 1) {
    bitmapDrawn = false;
    Keyboard.write(93); delay(5);

  }

  if (enc == -1) {
    bitmapDrawn = false;
    Keyboard.write(91); delay(5);

  }
}
