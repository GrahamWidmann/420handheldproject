int curMenu = 0;

void menu() {
  int enc = checkDial();
  
  if(enc == 1){curMenu = (curMenu + 1) % 4;}
  if(enc == -1){curMenu--; if(curMenu < 0){curMenu = 3;}}

  if(digitalRead (3) == LOW){
    Serial.println("Pressed!");
    switch(curMenu){
      case 0: mode = 1; break;
      case 1: mode = 9; break;
      case 2: mode = 7; break;
      case 3: mode = 8; break;
    }
    delay(250);
  }

  Serial.println(curMenu);

  if (curMenu != lastMenu){
 
    tft.setCursor(0, 0);
    tft.setTextColor(white, black);
    tft.print("MENU");
  
    tft.setCursor(0, 20);
    if(curMenu == 0){tft.setTextColor(black, white);}
    else {tft.setTextColor(white, black);}
    tft.print("Back");
  
    tft.setCursor(0, 40);
    if(curMenu == 1){tft.setTextColor(black, white);}
    else {tft.setTextColor(white, black);}
    tft.print("Color Changer");
  
    tft.setCursor(0, 60);
    if(curMenu == 2){tft.setTextColor(black, white);}
    else {tft.setTextColor(white, black);}
    tft.print("Help");
  
    tft.setCursor(0, 80);
    if(curMenu == 3){tft.setTextColor(black, white);}
    else {tft.setTextColor(white, black);}
    tft.print("About");
    
 
    lastMenu = curMenu;
    
  }
    

}



