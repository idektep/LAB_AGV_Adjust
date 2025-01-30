//-------------------------------------------------Declare variable-------------------------------------------------------//
#define MR_IN1 12 //backright motor
#define MR_IN2 13 //backright motor
#define MR_IN3 33 //frontright motor
#define MR_IN4 32 //frontright motor
#define ML_IN3 25 //backleft motor
#define ML_IN4 26 //backleft motor
#define ML_IN1 14 //frontleft motor
#define ML_IN2 27 //frontleft motor

#define BR_ENA 15  //Pin speed backright motor
#define FR_ENB 2   //Pin speed frontright motor
#define BL_ENB 4   //Pin speed backleft motor
#define FL_ENA 19  //Pin speed frontleft motor

#define L_LED 16  // Left LED
#define R_LED 17  // Right LED

//-----------------------------------------------Adjust range value 120-255-------------------------------------------------------//

uint8_t SpeedM1 = 150;  //Adjust speed //backright motor 
uint8_t SpeedM2 = 150;  //Adjust speed //frontright motor
uint8_t SpeedM3 = 150;  //Adjust speed //backleft motor
uint8_t SpeedM4 = 150;  //Adjust speed //frontleft motor

//-----------------------------------------------------------------------------------------------------------------------//

//-------------------------------------------------Edit Parameter-------------------------------------------------------//

void setup() {
  Serial.begin(115200);
  motorsetup();
  UltraPin();
  //---------- LED Pin -----------------//
  pinMode(L_LED, OUTPUT);
  pinMode(R_LED, OUTPUT);

//----------------Edit sequence code here--------------//
  digitalWrite(L_LED, HIGH);
  digitalWrite(R_LED, HIGH);
  delay(1000);

  forward(1000);
  stop(500);
  
}
void loop() {
 
  
}



