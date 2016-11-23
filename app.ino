
// First, we're going to make some variables.
// This is our "shorthand" that we'll use throughout the program:

int red = D0; // Instead of writing D0 over and over again, we'll write led1
int green = A0;
int hour;


void setup() {
  Serial.begin(9600);

  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);

  Time.zone(-4);
  hour = Time.hour(Time.now());
}

void loop() {
    if (hour > 21) {
        Serial.println(hour);
        hour--;
        System.sleep(SLEEP_MODE_DEEP, 5);
    } else {
        Serial.println(hour);

        // To blink the LED, first we'll turn it on...
        digitalWrite(red, HIGH);
        digitalWrite(green, LOW);

        // We'll leave it on for 1 second...
        delay(1000);

        // Then we'll turn it off...
        digitalWrite(red, LOW);
        digitalWrite(green, HIGH);

        // Wait 1 second...
        delay(1000);
    } 
}