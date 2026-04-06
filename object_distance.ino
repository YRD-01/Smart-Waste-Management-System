const int trigPin = 9;
const int echoPin = 10;
const int irPin = 7;

long duration;
float distance;
float fill;

float binHeight = 30.0;

void setup() {
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(irPin, INPUT);
}

void loop() {


  float total = 0;
  int validReadings = 0;

  for (int i = 0; i < 5; i++) {

    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH, 30000);

    if (duration > 0) {
      float dist = duration * 0.034 / 2;

      if (dist <= binHeight) {
        total += dist;
        validReadings++;
      }
    }

    delay(50);
  }

  if (validReadings == 0) {
    Serial.println("No valid reading");
    Serial.println("----------------------");
    delay(5000);
    return;
  }

  distance = total / validReadings;

  fill = ((binHeight - distance) / binHeight) * 100;

  int irState = digitalRead(irPin);

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  Serial.print("Fill Level: ");
  Serial.print(fill);
  Serial.println(" %");

  if (fill > 80) {
    Serial.println("ALERT: Bin Full!");
  }

  if (irState == LOW) {
    Serial.println("IR: Object Detected");
  } else {
    Serial.println("IR: No Object");
  }

  Serial.println("----------------------");


  delay(5000); 
}