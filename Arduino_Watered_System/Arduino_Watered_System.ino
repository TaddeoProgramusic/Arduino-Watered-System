

#define BUT 2

#define LEDR 3
#define LEDA 4
#define LEDV 7


void setup() 
{
  Serial.begin(9600);

  pinMode(A0, INPUT);
  pinMode(BUT, INPUT_PULLUP);
  pinMode(LEDR, OUTPUT);
  pinMode(LEDA, OUTPUT);
  pinMode(LEDV, OUTPUT);

  digitalWrite(LEDR, HIGH);
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDV, HIGH);
    delay(1000);
  digitalWrite(LEDR, LOW);
  digitalWrite(LEDA, LOW);
  digitalWrite(LEDV, LOW);
}

void loop() 
{
  if(digitalRead(BUT) == 0)
  {
    Serial.println(analogRead(A0));

    if(analogRead(A0) > 300 && analogRead(A0) < 550)
    {
      digitalWrite(LEDV, HIGH);
      delay(1000);
      digitalWrite(LEDV, LOW);
    }

    if(analogRead(A0) < 300)
    {
      digitalWrite(LEDR, HIGH);
      delay(1000);
      digitalWrite(LEDR, LOW);
    }

    if(analogRead(A0) > 550)
    {
      digitalWrite(LEDA, HIGH);
      delay(1000);
      digitalWrite(LEDA, LOW);
    }
  }
}

//Proyecto impulsado por el espíritu de la difunta María del Carmen Barbaglia
//Creditos completos a: Fabiola
