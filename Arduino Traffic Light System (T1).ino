// C++ code
//
int green = 1;
int yellow = 2;
int red = 3;


void setup()
{
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  
}

void loop()
{
  digitalWrite(green, 1);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(yellow, 1);
  delay(500); // Wait for 500 millisecond(s)
    
    digitalWrite(yellow, 0);
    delay(500); // Wait for 500 millisecond(s)
  
  digitalWrite(yellow, 1);
  delay(500); // Wait for 500 millisecond(s)
    
    digitalWrite(yellow, 0);
    delay(500); // Wait for 500 millisecond(s)
  
  digitalWrite(yellow, 1);
  delay(500); // Wait for 500 millisecond(s)
    
  digitalWrite(green, 0);
  digitalWrite(yellow, 0);
  
  digitalWrite(red, 1);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(red, 0);
  delay(500); // Wait for 500 millisecond(s)

}