#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

const int SIZE = 100;
int Skaiciai[SIZE];
int a;
void Apskaiciavimai();
int Suskaiciavimai(int Begimo_laikas_rytia[], int Begimo_laikas_vakaras[], int Skaiciai);

int main()
{
      std::ifstream i_file("U1.txt");
      while (!i_file.eof())
      {
            i_file >> Skaiciai[a];
            a++;
      }

      const int Pirmas_skaicius = 6;
      int Begimo_laikas_rytia[Pirmas_skaicius];
      for (int rutulio_skaicius = 0; rutulio_skaicius <= 6; rutulio_skaicius++)
      {

            Begimo_laikas_rytia[rutulio_skaicius] =
                (Skaiciai[4 + (9 * rutulio_skaicius)] * 60 + Skaiciai[5 + (9 * rutulio_skaicius)]) - (Skaiciai[2 + (9 * rutulio_skaicius)] * 60 + Skaiciai[3 + (9 * rutulio_skaicius)]);
            // beda su nulintu skaiciumi, turetu buti 15 o yra 0
      }

      cout << endl;

      int Begimo_laikas_vakaras[Pirmas_skaicius];
      for (int rutulio_skaicius = 0; rutulio_skaicius <= 6; rutulio_skaicius++)
      {
            Begimo_laikas_vakaras[rutulio_skaicius] =
                (Skaiciai[8 + (9 * rutulio_skaicius)] * 60 + Skaiciai[9 + (9 * rutulio_skaicius)]) - (Skaiciai[6 + (9 * rutulio_skaicius)] * 60 + Skaiciai[7 + (9 * rutulio_skaicius)]);
      }

      // cout << Begimo_laikas[0] << " " << Begimo_laikas[1];

      // Apskaiciavimai();
      int rutulio_skaicius = 0;
      Begimo_laikas_rytia[0] = (Skaiciai[4 + (9 * rutulio_skaicius)] * 60 + Skaiciai[5 + (9 * rutulio_skaicius)]) - (Skaiciai[2 + (9 * rutulio_skaicius)] * 60 + Skaiciai[3 + (9 * rutulio_skaicius)]);
      // jeigu veikia neverta taisyti;

      for (int i = 0; i < 6; i++)
      {

            cout << Skaiciai[1+(9*i)] << " ";
      }
}