

void setup() {
  pinMode(sensorDigital, INPUT);
      pinMode(buzzer, OUTPUT);
        Serial.begin(9600);
        }
        void loop() {

          bool digital = digitalRead(sensorDigital);



            int analog = analogRead(sensorAnalog);



  Serial.print("Analog value : ");



    Serial.print(analog);



      Serial.print("t");



        Serial.print("Digital value :");



          Serial.println(digital);



  if (digital == 0) {



      digitalWrite(relay, LOW);

        

       digitalWrite(buzzer, HIGH);

        delay(5000);

        digitalWrite(relay, HIGH);

        digitalWrite(buzzer, LOW);



            } else {



                digitalWrite(relay, HIGH);



                    digitalWrite(buzzer, LOW);



       }



            }
