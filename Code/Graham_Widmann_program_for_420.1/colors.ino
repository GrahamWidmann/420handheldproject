int curColor = 0;

void colors() {
  int enc = checkDial();
  
  if(enc == 1){curColor = (curColor + 1) % 5;}
  if(enc == -1){curColor--; if(curColor < 0){curColor = 3;}}

  if(digitalRead (3) == LOW){
    switch(curColor){
      case 0: rEd(); mode = 3; break;//green
      case 2: bLue(); mode = 3; break;//blue
      case 3: pAnk(); mode = 3; break; //pank
      case 4: mode = 3; break;
    }
    delay(250);
  }

  Serial.println(curColor);

  if (curColor != lastColor){
 
    tft.setCursor(0, 0);
    tft.setTextColor(white, black);
    tft.print("Color Picker");
  
    tft.setCursor(0, 20);
    if(curColor == 0){tft.setTextColor(black, white);}
    else {tft.setTextColor(red, black);}
    tft.print("RED");
  
    tft.setCursor(0, 40);
    if(curColor == 1){tft.setTextColor(black, white);}
    else {tft.setTextColor(green, black);}
    tft.print("GREEN");
  
    tft.setCursor(0, 60);
    if(curColor == 2){tft.setTextColor(black, white);}
    else {tft.setTextColor(blue, black);}
    tft.print("BLUE");
  
    tft.setCursor(0, 80);
    if(curColor == 3){tft.setTextColor(black, white);}
    else {tft.setTextColor(pink, black);}
    tft.print("PAAANK");

    tft.setCursor(0, 100);
    if(curColor == 4){tft.setTextColor(black, white);}
    else {tft.setTextColor(white, black);}
    tft.print("Back");

    lastColor = curColor;
    
  }
    

}


