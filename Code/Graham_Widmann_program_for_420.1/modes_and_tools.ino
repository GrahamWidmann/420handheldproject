void Brush() {
  tft.setCursor(0, 0);
  tft.print("Pen Tool");
  tft.drawBitmap(0, 0, penToolBitmap, 128, 100, white);
  
  //tft.setRotation(2);
}

void Hand() {

  if (!bitmapDrawn) {
    tft.setCursor(0, 0);
    tft.print("Hand Tool");
    tft.drawBitmap(0, 0, handToolBitmap, 128, 100, white);
    bitmapDrawn = true;
  }
  //tft.setRotation(2);
      
}

void Move() {
  tft.setCursor(0, 0);
  tft.print("Move Tool");
  tft.drawBitmap(0, 0, moveToolBitmap, 128, 100, white);
  //tft.setRotation(2);
}

void Pen() {
  tft.setCursor(0, 0);
  tft.print("Brush Tool");
  tft.drawBitmap(0, 0, brushToolBitmap, 128, 100, white);
  //tft.setRotation(2);
}

void Zoom() {
  tft.setCursor(0, 0);
  tft.print("Zoom Tool");
  tft.drawBitmap(0, 0, zoomLogo, 128, 100, white);
  //tft.setRotation(2);
}











