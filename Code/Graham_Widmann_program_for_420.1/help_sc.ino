void help() {
  tft.setCursor(0, 0);
  tft.print("HELP");
  tft.println();
  tft.print("Use main 4 buttons to change tools");
  tft.println();
  tft.print("Use rotation knob to change size of brush.");
  tft.println();
  tft.print("Use the Color Picker option to change the color of the device.");
  tft.println();
  tft.print("Use the help screen to find help ,but you are already here.");
  tft.println();
  tft.print("Use the about screen to learn more about the creator and the creation.");

  tft.setTextWrap (true);

  if(digitalRead (3) == LOW){mode = 3; delay(250);}


}


