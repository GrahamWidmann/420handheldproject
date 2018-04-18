void about() {
  tft.setCursor(0, 0);
  tft.setTextColor(white,black);
  tft.print("ABOUT");
  tft.println();
  tft.print("PixTool");
  tft.println();
  tft.print("PixTool was created to make Photoshop easier to access tools and brush features while editing photography. It is desgined for ergonomic and long use and for functionality. Pixtool allows qucik acces to the most used tools and feautures so the user never has to loose focus on their work.");
  tft.println();
  tft.print("Creator of PixTool");
  tft.println();
  tft.print("The creator of PixTool, Graham Widmann, is a Junior at Berry College majoring in Creative Technologies. He plans on being a graphic designer when he graduates and uses photoshop very frequently. He designed this tool for himself and to help others become for acquaited to phtoshop. Using his desing skills and want to be more lazy, he decided to not be lazy and make soemthing useful for him and others.");
  tft.println();


  tft.setTextWrap (true);

  if(digitalRead (3) == LOW){mode = 3; delay(250);}//
  

}
