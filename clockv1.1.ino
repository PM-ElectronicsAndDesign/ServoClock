  #include <Wire.h>
  #include <Adafruit_PWMServoDriver.h>
  #include <DS3231.h>

  Adafruit_PWMServoDriver pca1 = Adafruit_PWMServoDriver(0x40);
  Adafruit_PWMServoDriver pca2 = Adafruit_PWMServoDriver(0x41);

  #define SERVOMIN  330
  #define SERVOMAX  540

  DS3231  rtc(SDA, SCL);

  uint8_t dt1 = 0;
  uint8_t dt2 = 0;
  uint8_t dt3 = 0;
  uint8_t dt4 = 0;

  int pos11 = 0;
  int pos12 = 0;
  int pos13 = 0;
  int pos14 = 0;
  int pos15 = 0;
  int pos16 = 0;
  int pos17 = 0;
  int pos21 = 0;
  int pos22 = 0;
  int pos23 = 0;
  int pos24 = 0;
  int pos25 = 0;
  int pos26 = 0;
  int pos27 = 0;
  int pos31 = 0;
  int pos32 = 0;
  int pos33 = 0;
  int pos34 = 0;
  int pos35 = 0;
  int pos36 = 0;
  int pos37 = 0;
  int pos41 = 0;
  int pos42 = 0;
  int pos43 = 0;
  int pos44 = 0;
  int pos45 = 0;
  int pos46 = 0;
  int pos47 = 0;

  int pw;

  int hours;
  int minutes; 

  Time  t;


void move11(int updown){
  if (updown == 1 && pos11 == 0) {
  for (pw = 530; pw > 320; pw --) {
    delay(1);
    pca1.setPWM(0, 0, pw);
    }
  pos11 = 1;
  delay(50);
  }
  else if(updown == 0 && pos11 ==1) {
  for (pw = 320; pw < 530; pw ++) {
  delay(1);
    pca1.setPWM(0,0, pw);
  }  
  pos11 = 0;
  delay(50);
  }
}

void move12(int updown){
  if (updown == 1  && pos12 == 0) {
  for (pw = 560; pw >350; pw --) {
  delay(1);
    pca1.setPWM(1, 0, pw);
  }
  pos12 = 1;
  delay(50);
  }
  else if (updown == 0 && pos12 == 1) {
 for (pw = 350; pw < 560; pw ++) {
  delay(1);
    pca1.setPWM(1, 0, pw);
  }
  pos12 = 0;
  delay(50);
  }
}

void move13(int updown){
  if (updown == 1  && pos13 == 0) {
  for (pw = 530; pw >320; pw --) {
    delay(1);
    pca1.setPWM(2, 0, pw);
    }
  delay(50);
  pos13 = 1;
  }
  else if (updown == 0 && pos13 == 1) {
  for (pw = 320; pw < 530; pw ++) {
    delay(1);
    pca1.setPWM(2,0, pw);
    }
  pos13 = 0;
  delay(50);
  }
}

void move14(int updown){
  if (updown == 1  && pos14 == 0) {
  for (pw = 500; pw >290; pw --) {
  delay(1);
    pca1.setPWM(3, 0, pw);
  }  
  pos14 = 1;
  delay(50);
  }
  else if (updown == 0 && pos14 == 1) {
  for (pw = 290; pw < 500; pw ++) {
  delay(1);
    pca1.setPWM(3,0, pw);
  }
  pos14 = 0;
  delay(50);
  }
}

void move15(int updown){
  if (updown == 1  && pos15 == 0) {
  for (pw = 530; pw >320; pw --) {
  delay(1);
    pca1.setPWM(4, 0, pw);
  }
  pos15 = 1;
  delay(50);
  }
  else if (updown == 0 && pos15 == 1) {
  for (pw = 320; pw < 530; pw ++) {
  delay(1);
    pca1.setPWM(4,0, pw);
  }
  pos15 = 0;
  delay(50);
  }
}

void move16(int updown){
  if (updown == 1  && pos16 == 0) {
  for (pw = 540; pw >310; pw --) {
  delay(1);
    pca1.setPWM(5, 0, pw);
  }
  pos16 = 1;
  delay(50);
  }
  else if (updown == 0 && pos16 == 1) {
  for (pw = 310; pw < 540; pw ++) {
  delay(1);
    pca1.setPWM(0,0, pw);
  }
  pos16 = 0;
  delay(50);
  }
}

void move17(int updown){
  if (updown == 1  && pos17 == 0) {
  for (pw = 540; pw >310; pw --) {
  delay(1);
    pca1.setPWM(6, 0, pw);
  }
  pos17 = 1;
  delay(50);
  }
  else if (updown == 0 && pos17 == 1) {
  for (pw = 310; pw < 540; pw ++) {
  delay(1);
    pca1.setPWM(6,0, pw);
  }
  pos17 = 0;
  delay(50);
  }
}

void move21(int updown){
  if (updown == 1  && pos21 == 0) {
  for (pw = 540; pw >330; pw --) {
  delay(1);
    pca1.setPWM(7, 0, pw);
  }
  pos21 = 1;
  delay(50);
  }
  else if (updown == 0 && pos21 == 1) {
  for (pw = 330; pw < 540; pw ++) {
  delay(1);
    pca1.setPWM(7,0, pw);
  }
  pos21 = 0;
  delay(50);
  }
}

void move22(int updown){
  if (updown == 1  && pos22 == 0) {
  for (pw = 540; pw >330; pw --) {
  delay(1);
    pca1.setPWM(8, 0, pw);
  }
  pos22 = 1;
  delay(50);
  }
  else if (updown == 0 && pos22 == 1) {
  for (pw = 330; pw < 540; pw ++) {
  delay(1);
    pca1.setPWM(8, 0, pw);
  }
  pos22 = 0;
  delay(50);
  }
}

void move23(int updown){
  if (updown == 1  && pos23 == 0) {
  for (pw = 550; pw >340; pw --) {
  delay(1);
    pca1.setPWM(9, 0, pw);
  }
  pos23 = 1;
  delay(50);
  }
  else if (updown == 0 && pos23 == 1) {
  for (pw = 340; pw < 550; pw ++) {
  delay(1);
    pca1.setPWM(9,0, pw);
  }
  pos23 = 0;
  delay(50);
  }
}

void move24(int updown){
  if (updown == 1  && pos24 == 0) {
  for (pw = 520; pw >310; pw --) {
  delay(1);
    pca1.setPWM(10, 0, pw);
  }
  pos24 = 1;
  delay(50);
  }
  else if (updown == 0 && pos24 == 1) {
  for (pw = 310; pw < 520; pw ++) {
  delay(1);
    pca1.setPWM(10,0, pw);
  }
  pos24 = 0;
  delay(50);
  }
}

void move25(int updown){
  if (updown == 1  && pos25 == 0) {
  for (pw = 510; pw >300; pw --) {
  delay(1);
    pca1.setPWM(11, 0, pw);
  }
  pos25 = 1;
  delay(50);
  }
  else if (updown == 0 && pos25 == 1) {
  for (pw = 300; pw < 510; pw ++) {
  delay(1);
    pca1.setPWM(11, 0, pw);
  }
  pos25 = 0;
  delay(50);
  }
}

void move26(int updown){
  if (updown == 1  && pos26 == 0) {
  for (pw = 540; pw >330; pw --) {
  delay(1);
    pca1.setPWM(12, 0, pw);
  }
  pos26 = 1;
  delay(50);
  }
  else if (updown == 0 && pos26 == 1) {
  for (pw = 330; pw < 540; pw ++) {
  delay(1);
    pca1.setPWM(12,0, pw);
  }
  pos26 = 0;
  delay(50);
  }
}  
void move27(int updown){
  if (updown == 1  && pos27 == 0) {
  for (pw = 540; pw >330; pw --) {
  delay(1);
    pca1.setPWM(13, 0, pw);
  }
  pos27 = 1;
  delay(50);
  }
  else if (updown == 0 && pos27 == 1) {
  for (pw = 330; pw < 540; pw ++) {
  delay(1);
    pca1.setPWM(13,0, pw);
  }
  pos27 = 0;
  delay(50);
  }
}
void move31(int updown){
  if (updown == 1  && pos31 == 0) {
  for (pw = 520; pw >310; pw --) {
  delay(1);
    pca2.setPWM(0, 0, pw);
  }
  pos31 = 1;
  delay(50);
  }
  else if (updown == 0 && pos31 == 1) {
  for (pw = 310; pw < 520; pw ++) {
  delay(1);
    pca2.setPWM(0,0, pw);
  }
  pos31 = 0;
  delay(50);
  }
}

void move32(int updown){
  if (updown == 1  && pos32 == 0) {
  for (pw = 530; pw >320; pw --) {
  delay(1);
    pca2.setPWM(1, 0, pw);
  }
  pos32 = 1;
  delay(50);
  }
  else if (updown == 0 && pos32 == 1) {
  for (pw = 320; pw < 530; pw ++) {
  delay(1);
    pca2.setPWM(1,0, pw);
  }
  pos32 = 0;
  delay(50);
  }
}

void move33(int updown){
  if (updown == 1  && pos33 == 0) {
  for (pw = 540; pw >330; pw --) {
  delay(1);
    pca2.setPWM(2, 0, pw);
  }
  pos33 = 1;
  delay(50);
  }
  else if (updown == 0 && pos33 == 1) {
  for (pw = 330; pw < 540; pw ++) {
  delay(1);
    pca2.setPWM(2,0, pw);
  }
  pos33 = 0;
  delay(50);
  }
}

void move34(int updown){
  if (updown == 1  && pos34 == 0) {
  for (pw = 560; pw >350; pw --) {
  delay(1);
    pca2.setPWM(3, 0, pw);
  }
  pos34 = 1;
  delay(50);
  }
  else if (updown == 0 && pos34 == 1) {
  for (pw = 350; pw < 560; pw ++) {
  delay(1);
    pca2.setPWM(3, 0, pw);
  }
  pos34 = 0;
  delay(50);
  }
}

void move35(int updown){
  if (updown == 1  && pos35 == 0) {
  for (pw = 510; pw >300; pw --) {
  delay(1);
    pca2.setPWM(4, 0, pw);
  }
  pos35 = 1;
  delay(50);
  }
  else if (updown == 0 && pos35 == 1) {
  for (pw = 300; pw < 510; pw ++) {
  delay(1);
    pca2.setPWM(4,0, pw);
  }
  pos35 = 0;
  delay(50);
  }
}

void move36(int updown){
  if (updown == 1  && pos36 == 0) {
  for (pw = 510; pw >300; pw --) {
  delay(1);
    pca2.setPWM(5, 0, pw);
  }
  pos36 = 1;
  delay(50);
  }
  else if (updown == 0 && pos36 == 1) {
  for (pw = 300; pw < 510; pw ++) {
  delay(1);
    pca2.setPWM(5,0, pw);
  }
  pos36 = 0;
  delay(50);
  }
}

void move37(int updown){
  if (updown == 1  && pos37 == 0) {
  for (pw = 500; pw >290; pw --) {
  delay(1);
    pca2.setPWM(6, 0, pw);
  }
  pos37 = 1;
  delay(50);
  }
  else if (updown == 0 && pos37 == 1) {
  for (pw = 290; pw < 500; pw ++) {
  delay(1);
    pca2.setPWM(6,0, pw);
  }
  pos37 = 0;
  delay(50);
  }
}

void move41(int updown){
  if (updown == 1  && pos41 == 0) {
  for (pw = 500; pw >290; pw --) {
  delay(1);
    pca2.setPWM(7, 0, pw);
  }
  pos41 = 1;
  delay(50);
  }
  else if (updown == 0 && pos41 == 1) {
  for (pw = 290; pw < 500; pw ++) {
  delay(1);
    pca2.setPWM(7,0, pw);
  }
  pos41 = 0;
  delay(50);
  }
}

void move42(int updown){
  if (updown == 1  && pos42 == 0) {
  for (pw = 520; pw >310; pw --) {
  delay(1);
    pca2.setPWM(8, 0, pw);
  }
  pos42 = 1;
  delay(50);
  }
  else if (updown == 0 && pos42 == 1) {
  for (pw = 310; pw < 520; pw ++) {
  delay(1);
    pca2.setPWM(8,0, pw);
  }
  pos42 = 0;
  delay(50);
  }
}

void move43(int updown){
  if (updown == 1  && pos43 == 0) {
  for (pw = 510; pw >300; pw --) {
  delay(1);
    pca2.setPWM(9, 0, pw);
  }
  pos43 = 1;
  delay(50);
  }
  else if (updown == 0 && pos43 == 1) {
  for (pw = 300; pw < 510; pw ++) {
  delay(1);
    pca2.setPWM(9,0, pw);
  }
  pos43 = 0;
  delay(50);
  }
}

void move44(int updown){
  if (updown == 1  && pos44 == 0) {
  for (pw = 530; pw >320; pw --) {
  delay(1);
    pca2.setPWM(10, 0, pw);
  }
  pos44 = 1;
  delay(50);
  }
  else if (updown == 0 && pos44 == 1) {
  for (pw = 320; pw < 530; pw ++) {
  delay(1);
    pca2.setPWM(10,0, pw);
  }
  pos44 = 0;
  delay(50);
  }
}

void move45(int updown){
  if (updown == 1  && pos45 == 0) {
  for (pw = 500; pw >290; pw --) {
  delay(1);
    pca2.setPWM(11, 0, pw);
  }
  pos45 = 1;
  delay(50);
  }
  else if (updown == 0 && pos45 == 1) {
  for (pw = 290; pw < 500; pw ++) {
  delay(1);
    pca2.setPWM(11,0, pw);
  }
  pos45 = 0;
  delay(50);
  }
}

void move46(int updown){
  if (updown == 1  && pos46 == 0) {
  for (pw = 500; pw >290; pw --) {
  delay(1);
    pca2.setPWM(12, 0, pw);
  }
  pos46 = 1;
  delay(50);
  }
  else if (updown == 0 && pos46 == 1) {
  for (pw = 290; pw < 500; pw ++) {
  delay(1);
    pca2.setPWM(12,0, pw);
  }
  pos46 = 0;
  delay(50);
  }
}

void move47(int updown){
  if (updown == 1  && pos47 == 0) {
  for (pw = 530; pw >320; pw --) {
  delay(1);
    pca2.setPWM(13, 0, pw);
  }
  pos47 = 1;
  delay(50);
  }
  else if (updown == 0 && pos47 == 1) {
  for (pw = 320; pw < 530; pw ++) {
  delay(1);
    pca2.setPWM(13,0, pw);
  }
  pos47 = 0;
  delay(50);
  }
}




  void digit1(int d1) {
    if (d1 == 1){
     move11(0);
   
     move12(0);
     
     move13(0);
     
     move14(0);
     
     move15(0);
     
     move16(1);
     
     move17(1);
     
    }
    
    else if (d1 == 2){
     move11(0);
     
     move12(1);
     
     move13(1);
     
     move14(1);
     
     move15(1);
     
     move16(1);
     
     move17(0); 
     
    }
    
    else if (d1 == 3){
     move11(0);
     
     move12(0);
     
     move13(1);
     
     move14(1);
     
     move15(1);
     
     move16(1);
     
     move17(1); 
      
    }
    
    else if (d1 == 4){
     move11(1);
     
     move12(0);
     
     move13(0);
     
     move14(1);
     
     move15(0);
     
     move16(1);
     
     move17(1); 
      
    }
    else if (d1 == 5){
     move11(1);
     
     move12(0);
     
     move13(1);
     
     move14(1);
     
     move15(1);
     
     move16(0);
     
     move17(1); 
      
    }
    else if (d1 == 6){
     move11(1);
     
     move12(1);
     
     move13(1);
     
     move14(1);
     
     move15(1);
     
     move16(0);
     
     move17(1); 
      
    }
    else if (d1 == 7){
     move11(0);
     
     move12(0);
     
     move13(1);
     
     move14(0);
     
     move15(0);
     
     move16(1);
     
     move17(1); 
      
    }
    else if (d1 == 8){
     move11(1);
     
     move12(1);
     
     move13(1);
     
     move14(1);
     
     move15(1);
     
     move16(1);
     
     move17(1); 
      
    }
    
    else if (d1 == 9){
     move11(1);
     
     move12(0);
     
     move13(1);
     
     move14(1);
     
     move15(1);
     
     move16(1);
     
     move17(1); 
      
    }
    
    else if (d1 == 0){
     move11(1);
     
     move12(1);
     
     move13(1);
     
     move14(0);
     
     move15(1);
     
     move16(1);
     
     move17(1); 
     
    }
    else{
    }
  }


  void digit2(int d2) {
    if (d2 == 1){
     move21(0);
     
     move22(0);
     
     move23(0);
     
     move24(0);
     
     move25(0);
     
     move26(1);
     
     move27(1);
     
    }
    
    else if (d2 == 2){
     move21(0);
     
     move22(1);
     
     move23(1);
     
     move24(1);
     
     move25(1);
     
     move26(1);
     
     move27(0); 
     
    }
    
    else if (d2 == 3){
     move21(0);
     
     move22(0);
     
     move23(1);
     
     move24(1);
     
     move25(1);
     
     move26(1);
     
     move27(1); 
      
    }
    
    else if (d2 == 4){
     move21(1);
     
     move22(0);
     
     move23(0);
     
     move24(1);
     
     move25(0);
     
     move26(1);
     
     move27(1); 
      
    }
    else if (d2 == 5){
     move21(1);
     
     move22(0);
     
     move23(1);
     
     move24(1);
     
     move25(1);
     
     move26(0);
     
     move27(1); 
      
    }
    else if (d2 == 6){
     move21(1);
     
     move22(1);
     
     move23(1);
     
     move24(1);
     
     move25(1);
     
     move26(0);
     
     move27(1); 
      
    }
    else if (d2 == 7){
     move21(0);
     
     move22(0);
     
     move23(1);
     
     move24(0);
     
     move25(0);
     
     move26(1);
     
     move27(1); 
      
    }
    else if (d2 == 8){
     move21(1);
     
     move22(1);
     
     move23(1);
     
     move24(1);
     
     move25(1);
     
     move26(1);
     
     move27(1); 
      
    }
    
    else if (d2 == 9){
     move21(1);
     
     move22(0);
     
     move23(1);
     
     move24(1);
     
     move25(1);
     
     move26(1);
     
     move27(1); 
      
    }
    
    else if (d2 == 0){
     move21(1);
     
     move22(1);
     
     move23(1);
     
     move24(0);
     
     move25(1);
     
     move26(1);
     
     move27(1); 
     
    }
  }


  void digit3(int d3) {
    if (d3 == 1){
     move31(0);
     
     move32(0);
     
     move33(0);
     
     move34(0);
     
     move35(0);
     
     move36(1);
     
     move37(1);
     
    }
    
    else if (d3 == 2){
     move31(0);
     
     move32(1);
     
     move33(1);
     
     move34(1);
     
     move35(1);
     
     move36(1);
     
     move37(0); 
     
    }
    
    else if (d3 == 3){
     move31(0);
     
     move32(0);
     
     move33(1);
     
     move34(1);
     
     move35(1);
     
     move36(1);
     
     move37(1); 
      
    }
    
    else if (d3 == 4){
     move31(1);
     
     move32(0);
     
     move33(0);
     
     move34(1);
     
     move35(0);
     
     move36(1);
     
     move37(1); 
      
    }
    else if (d3 == 5){
     move31(1);
     
     move32(0);
     
     move33(1);
     
     move34(1);
     
     move35(1);
     
     move36(0);
     
     move37(1); 
      
    }
    else if (d3 == 6){
     move31(1);
     
     move32(1);
     
     move33(1);
     
     move34(1);
     
     move35(1);
     
     move36(0);
     
     move37(1); 
      
    }
    else if (d3 == 7){
     move31(0);
     
     move32(0);
     
     move33(1);
     
     move34(0);
     
     move35(0);
     
     move36(1);
     
     move37(1); 
      
    }
    else if (d3 == 8){
     move31(1);
     
     move32(1);
     
     move33(1);
     
     move34(1);
     
     move35(1);
     
     move36(1);
     
     move37(1); 
      
    }
    
    else if (d3 == 9){
     move31(1);
     
     move32(0);
     
     move33(1);
     
     move34(1);
     
     move35(1);
     
     move36(1);
     
     move37(1); 
      
    }
    
    else if (d3 == 0){
     move31(1);
     
     move32(1);
     
     move33(1);
     
     move34(0);
     
     move35(1);
     
     move36(1);
     
     move37(1); 
     
    }
  }


  void digit4(int d4) {
    if (d4 == 1){
     move41(0);
     
     move42(0);
     
     move43(0);
     
     move44(0);
     
     move45(0);
     
     move46(1);
     
     move47(1);
     
    }
    
    else if (d4 == 2){
     move41(0);
     
     move42(1);
     
     move43(1);
     
     move44(1);
     
     move45(1);
     
     move46(1);
     
     move47(0); 
     
    }
    
    else if (d4 == 3){
     move41(0);
     
     move42(0);
     
     move43(1);
     
     move44(1);
     
     move45(1);
     
     move46(1);
     
     move47(1); 
      
    }
    
    else if (d4 == 4){
     move41(1);
     
     move42(0);
     
     move43(0);
     
     move44(1);
     
     move45(0);
     
     move46(1);
     
     move47(1); 
      
    }
    else if (d4 == 5){
     move41(1);
     
     move42(0);
     
     move43(1);
     
     move44(1);
     
     move45(1);
     
     move46(0);
     
     move47(1); 
      
    }
    else if (d4 == 6){
     move41(1);
     
     move42(1);
     
     move43(1);
     
     move44(1);
     
     move45(1);
     
     move46(0);
     
     move47(1); 
      
    }
    else if (d4 == 7){
     move41(0);
     
     move42(0);
     
     move43(1);
     
     move44(0);
     
     move45(0);
     
     move46(1);
     
     move47(1); 
      
    }
    else if (d4 == 8){
     move41(1);
     
     move42(1);
     
     move43(1);
     
     move44(1);
     
     move45(1);
     
     move46(1);
     
     move47(1); 
      
    }
    
    else if (d4 == 9){
     move41(1);
     
     move42(0);
     
     move43(1);
     
     move44(1);
     
     move45(1);
     
     move46(1);
     
     move47(1); 
      
    }
    
    else if (d4 == 0)  {
     move41(1);
     
     move42(1);
     
     move43(1);
     
     move44(0);
     
     move45(1);
     
     move46(1);
     
     move47(1); 
     
    }
  }


  void setup() {
    Serial.begin(115200);          //Turn off after done!!!!!!!!!
    rtc.begin();
    pca1.begin();
    pca1.setPWMFreq(60);  // Analog servos run at ~60 Hz updates
    pca2.begin();
    pca2.setPWMFreq(60);  // Analog servos run at ~60 Hz updates
    digit1(8);
    digit2(8);
    digit3(8);
    digit4(8);
  }


  void loop() {
   t = rtc.getTime();
   delay(100);
   hours = t.hour;
   minutes = t.min;
   dt2 = hours % 10;
   dt1 = (hours-dt2)/10;
   dt4 = minutes % 10;
   dt3 = (minutes-dt4)/10;

   digit1(dt1);
   digit2(dt2);
   digit3(dt3);
   digit4(dt4);
   
   delay(1000); 
  }




