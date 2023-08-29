const int bit_A = 2;
const int bit_B = 3;
const int bit_C = 4;
const int bit_D = 5;
void setup()
{
//on met les broches en sorties
  pinMode(bit_A, OUTPUT);
  pinMode(bit_B, OUTPUT);
  pinMode(bit_C, OUTPUT);
  pinMode(bit_D, OUTPUT);
//on commence par écrire le chiffre 0, donc toutes les sorites à l'état bas
  digitalWrite(bit_A, LOW);
  digitalWrite(bit_B, LOW);
  digitalWrite(bit_C, LOW);
  digitalWrite(bit_D, LOW);
}
void loop()
{
  char i=0; //variable "compteur"
    for(i=0; i<10; i++)
    {
      affichage(i); //on appel la fonction d'affichage
      delay(1000); //on attend 1 seconde
    }
}
//fonction écrivant sur un seul afficheur
void affichage(char chiffre)
{
  switch(chiffre)
    {
      case 0 :
        digitalWrite(bit_A, LOW);
        digitalWrite(bit_B, LOW);
        digitalWrite(bit_C, LOW);
        digitalWrite(bit_D, LOW);
      break;
      case 1 :
        digitalWrite(bit_A, HIGH);
        digitalWrite(bit_B, LOW);
        digitalWrite(bit_C, LOW);
        digitalWrite(bit_D, LOW);
      break;
      case 2 :
        digitalWrite(bit_A, LOW);
        digitalWrite(bit_B, HIGH);
        digitalWrite(bit_C, LOW);
        digitalWrite(bit_D, LOW);
      break;
      case 3 :
        digitalWrite(bit_A, HIGH);
        digitalWrite(bit_B, HIGH);
        digitalWrite(bit_C, LOW);
        digitalWrite(bit_D, LOW);
      break;
      case 4 :
        digitalWrite(bit_A, LOW);
        digitalWrite(bit_B, LOW);
        digitalWrite(bit_C, HIGH);
        digitalWrite(bit_D, LOW);
      break;
      case 5 :
        digitalWrite(bit_A, HIGH);
        digitalWrite(bit_B, LOW);
        digitalWrite(bit_C, HIGH);
        digitalWrite(bit_D, LOW);
      break;
      case 6 :
        digitalWrite(bit_A, LOW);
        digitalWrite(bit_B, HIGH);
        digitalWrite(bit_C, HIGH);
        digitalWrite(bit_D, LOW);
        break;
      case 7 :
        digitalWrite(bit_A, HIGH);
        digitalWrite(bit_B, HIGH);
        digitalWrite(bit_C, HIGH);
        digitalWrite(bit_D, LOW);
      break;
      case 8 :
        digitalWrite(bit_A, LOW);
        digitalWrite(bit_B, LOW);
        digitalWrite(bit_C, LOW);
        digitalWrite(bit_D, HIGH);
      break;
      case 9 :
        digitalWrite(bit_A, HIGH);
        digitalWrite(bit_B, LOW);
        digitalWrite(bit_C, LOW);
        digitalWrite(bit_D, HIGH);
      break;
    }
}
