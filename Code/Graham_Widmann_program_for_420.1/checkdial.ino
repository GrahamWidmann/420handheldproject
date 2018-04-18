int checkDial() {
  myEnc.tick();

  int dir = 0;
  int newPosition = myEnc.getPosition();

  
  if (newPosition != oldPosition) {
    if (oldPosition > newPosition){dir = -1;}
    else{dir = 1;}
    
    oldPosition = newPosition;
    delay(10);
  }
  
  return dir;
   
}


