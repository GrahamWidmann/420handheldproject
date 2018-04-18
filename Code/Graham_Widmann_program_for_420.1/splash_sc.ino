void Splash() {
  tft.setCursor(0, 0);
  tft.drawBitmap(0, 0 , splashLogo, 128, 100, white);
  tft.setCursor(20,100);
  tft.setTextColor(white,black);
  tft.setTextSize(2);
  tft.print("PixTool");
  //tft.setRotation(2);
  delay(2500);
  mode = 1;
}


