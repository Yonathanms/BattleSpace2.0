void setup()
{
  Serial.begin(9600);
}

void loop() {
    pinMode(A1, INPUT);

  // Esperar a recibir mensaje de respuesta
  int val = analogRead(A1);
  
    if(val > 525)
    {
        Serial.println("Arriba");
            delay(1000);
    }
    
    if(val < 505)
    {
      Serial.println("");
          delay(1000);

    }
}
