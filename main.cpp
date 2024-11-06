#include <iostream>

using namespace std;

int main() 
{
  int totNumeri, contPos, contNeg;
  float x, max, min, mediapos, sommaPos;
  
  sommaPos = 0;
  contPos = 0;
  contNeg = 0;
  cout << "Inserisci un numero. 0 per uscire." << endl;
  cin >> x;
  max = x;
  min = x;
  while (x != 0) {
    if (x > max) 
    {
      max = x;
    }
    if (x < min) 
    {
      min = x;
    }
    
    if (x > 0) 
    {
      sommaPos = sommaPos + x;
      contPos = contPos + 1;
    } 
    else 
    {
      contNeg = contNeg + 1;
    }
    cout << "Inserisci un numero. 0 per uscire." << endl;
    cin >> x;
  }
  cout << "Sono stati inseriti " << contNeg << " valori negativi." << endl;
  if (contPos > 0) 
  {
    mediapos = sommaPos / contPos;
    cout << "La media dei positivi è " << mediapos << endl;
  }
  if ( contPos > 0 or contNeg > 0 )
  {
    cout << "Il massimo è " << max << endl;
    cout << "Il minimo è " << min << endl;
  }

}