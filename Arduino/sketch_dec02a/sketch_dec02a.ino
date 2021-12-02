int valeurPrecedenteInterrupteur;
int brocheInterrupteur = 3;

int valeurPrecedenteInterrupteur2;
int brocheInterrupteur2 = 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(38400);
  pinMode(brocheInterrupteur, INPUT_PULLUP);
  pinMode(brocheInterrupteur2, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int nouvelleValeurInterrupteur = digitalRead(brocheInterrupteur);
  int nouvelleValeurInterrupteur2 = digitalRead(brocheInterrupteur2);
  

  if(valeurPrecedenteInterrupteur != nouvelleValeurInterrupteur) {
    Serial.print("but ");
    Serial.println(nouvelleValeurInterrupteur);
    valeurPrecedenteInterrupteur = nouvelleValeurInterrupteur;
  }
  if(valeurPrecedenteInterrupteur2 != nouvelleValeurInterrupteur2) {
    Serial.print("but2 ");
    Serial.println(nouvelleValeurInterrupteur2);
    valeurPrecedenteInterrupteur2 = nouvelleValeurInterrupteur2;
  }
  
}
