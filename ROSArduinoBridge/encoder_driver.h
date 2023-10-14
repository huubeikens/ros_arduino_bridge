/* *************************************************************
   Encoder driver function definitions - by James Nugen
   ************************************************************ */
   
   
#ifdef ARDUINO_ENC_COUNTER
  //below can be changed, but should be PORTD pins; 
  //otherwise additional changes in the code are required
  #define LEFT_ENC_PIN_A_IN_2     15  
  #define LEFT_ENC_PIN_B_IN_1     16  
  #define LEFT_ENC_EN_A           17  
  
  //below can be changed, but should be PORTC pins
  #define RIGHT_ENC_PIN_A_IN_4    13
  #define RIGHT_ENC_PIN_B_IN_3    14
  #define RIGHT_INC_EN_B          12
#endif
   
long readEncoder(int i);
void resetEncoder(int i);
void resetEncoders();