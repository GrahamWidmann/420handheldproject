void splash() {
  //tft.fillScreen(black);
  tft.setCursor(0, 0);
  tft.drawBitmap(0, 0 , photoshopLogo, 128, 100, white);
  tft.setTextSize(5);
  tft.print("PixTool");
  //tft.setRotation(2);
}
void main1() {
  tft.fillScreen(black);
  tft.setCursor(0, 0);
  tft.print("Hand Tool");
  tft.drawBitmap(0, 0, handToolBitmap, 128, 100, white);
  //tft.setRotation(2);
}
void main2() {
  tft.fillScreen(black);

  tft.setCursor(0, 0);
  tft.print("Brush Tool");
  tft.drawBitmap(0, 0, brushToolBitmap, 128, 100, white);
  //tft.setRotation(2);
}
void main3() {
  tft.fillScreen(black);

  tft.setCursor(0, 0);
  tft.print("Move Tool");
  tft.drawBitmap(0, 0, moveToolBitmap, 128, 100, white);
  //tft.setRotation(2);
}
void main4() {
  tft.fillScreen(black);

  tft.setCursor(0, 0);
  tft.print("Pen Tool");
  tft.drawBitmap(0, 0, penToolBitmap, 128, 100, white);
  //tft.setRotation(2);
}
void menu() {
  tft.setCursor(0, 0);
  tft.print("MENU");
  tft.println();
  tft.print("Back to Tool");
  tft.print("Appearance");
  tft.println();
  tft.print("Customization");
  tft.println();
  tft.print("Help");
  tft.println();
  tft.print("About");

}
void help() {
  tft.setCursor(0, 0);
  tft.print("HELP");
  tft.println();
  tft.print("Use buttons to change tools");
  tft.println();
  tft.print("Use rotation knob to change size of brush. Push down to change the hardness of the tool.");
  tft.println();
  tft.print("Use brightness option to change the brightness of the backlight behind the keys of the device.");
  tft.println();
  tft.print("Use the customization option to change the buttons and what tools they are linked to.");
  tft.println();
  tft.print("Use the help screen to find help ,but you are already here.");
  tft.println();
  tft.print("Use the about screen to learn more about the creator and the creation.");

  tft.setTextWrap (true);

}
void about() {
  tft.setCursor(0, 0);
  tft.print("ABOUT");
  tft.println();
  tft.print("PixTool");
  tft.println();
  tft.print("PixTool was created to make it easier to access tools and brush features within photoshop and other Adobe products. It is desgined for ergonomic and long use and for functionality. Many customization options are avalible including colors and brightness. Pixtool allows qucik acces to the most used tools and feautures so the user never has to loose focus on their work.");
  tft.println();
  tft.print("Creator of PixTool");
  tft.println();
  tft.print("The creator of PixTool, Graham Widmann, is a Junior at Berry College majoring in Creative Technologies with minors in art and webdesign. He plans on being a graphic designer when he graduates and uses photoshop very frequently. He designed this tool for himself and to help others become for acquaited to phtoshop. Using his desing skills and want to be more lazy, he decided to not be lazy and make soemthing useful for him and others.");
  tft.println();


  tft.setTextWrap (true);

}


