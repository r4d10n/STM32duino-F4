#define LED3 Port2Pin('D',13)  // Green LED
#define LED4 Port2Pin('D',12)  // Orange LED
#define LED5 Port2Pin('D',14)  // Red LED
#define LED6 Port2Pin('D',15)  // Blue LED

#define BUTTON Port2Pin('A',0) // User Button

void setup() {
  Serial2.begin(9600);    // RX on Port PA2
  
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);

  pinMode(BUTTON, INPUT);
}

void loop() {
  Serial2.println("Testing...");
  
  togglePin(LED3);
  delay(100);
  togglePin(LED4);
  delay(100);
  togglePin(LED5);
  delay(100);
  togglePin(LED6);
  delay(100);

  if (digitalRead(BUTTON) == HIGH)
    Serial2.println("Button Pressed");
}
