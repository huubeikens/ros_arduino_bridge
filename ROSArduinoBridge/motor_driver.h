/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD  4 // IN4  
  #define LEFT_MOTOR_BACKWARD   6 // IN2
  #define RIGHT_MOTOR_FORWARD   3 // IN3
  #define LEFT_MOTOR_FORWARD    5 // IN1
  #define RIGHT_MOTOR_ENABLE    2 // ENB
  #define LEFT_MOTOR_ENABLE     7 // ENA
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
